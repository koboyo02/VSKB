#include "./functions/output.c"
#include "./functions/menu.c"
#include "./functions/input.c"
#include "./functions/fight.c"
#include "./functions/array.c"
#include "./include/Boss.h"
#include "./include/Enemy.h"
#include "./include/Players.h"
#include <stdlib.h>

int main(void)
{
    show_intro();

    int enemy_increment = rand() % (2 + 1);
    int enemy_count = 5;
    int current_enemy_index = 0;

    Enemy_t *enemy = malloc(sizeof(Enemy_t));
    set_enemy(enemy, current_enemy_index);
    Player_t *player = select_characters_menu(0);

    while ((0 < player->hp && 0 < enemy->hp) || -1 != current_enemy_index)
    {
        print_normal_fight_stats(enemy, player);
        unsigned short int choice = ask_action_for_normal_fight();
        switch (choice)
        {
        case 1: // attack
            attack_enemy(enemy, player);
            if (0 >= enemy->hp)
            {
                my_print("Vous avez vaincu ");
                my_print(enemy->name);
                my_print("\n");
                current_enemy_index += enemy_increment;
                if (enemy_count <= current_enemy_index)
                {
                    current_enemy_index = -1; // set to boss mode
                    break;
                }
                set_enemy(enemy, current_enemy_index);
                continue; // next enemy
            }
            break;
        case 2: // heal
            heal_player(player);
            break;
        case 3: // flee
            my_print("Vous avez veski\n");
            free(enemy);
            free(player);
            return 0;
        }
        
        if (-1 == current_enemy_index) {
            break;
        }

        // enemy attack
        attack_player(enemy, player);
        if (0 >= player->hp)
        {
            my_print("Vous avez été vaincu\n");
            free(enemy);
            free(player);
            return 0;
        }
    }

    free(enemy);
    // boss fight
    int boss_count = 2;

    current_enemy_index = (rand() % (boss_count + 1)) - 1;
    Boss_t *boss = malloc(sizeof(Boss_t));
    set_boss(boss, current_enemy_index);

    switch (current_enemy_index)
    {
    case 0:
    case 1:
        my_print("Oh, un boss !\n");
        sleep(1);
        while (0 < player->hp && 0 < boss->hp)
        {
            print_boss_fight_stats(boss, player);
            unsigned short int choice = ask_action_for_normal_fight();
            switch (choice)
            {
            case 1: // attack
                attack_boss(boss, player);
                if (0 >= boss->hp)
                {
                    my_print("Vous avez vaincu ");
                    my_print(boss->name);
                    my_print("\n");
                    my_print("Tu es un boss de la veski !\n");
                    free(boss);
                    free(player);
                    return 0;
                }
                break;
            case 2: // heal
                heal_player(player);
                break;
            case 3: // flee
                my_print("Vous avez veski\n");
                free(boss);
                free(player);
                return 0;
            }

            // boss attack
            boss_attack_player(boss, player);
            if (0 >= player->hp)
            {
                my_print("Vous avez été vaincu\n");
                free(boss);
                free(player);
                return 0;
            }
        }
        break;
    default:
        boss_opj_scenario(player);
        break;
    }

    return 0;
}