#ifndef FN_FIGHT
#define FN_FIGHT

#include "./input.c"
#include "./output.c"
#include "../include/Players.h"
#include "../include/Enemy.h"
#include "../include/Boss.h"
#include "menu.c"

void set_enemy(Enemy_t *Enemy, int currentEnemy)
{
    Enemy->name = Enemy_name[currentEnemy];
    Enemy->hp = Enemy_hp[currentEnemy];
    Enemy->max_hp = Enemy->hp;
    Enemy->str = Enemy_str[currentEnemy];
    Enemy->def = Enemy_def[currentEnemy];
    Enemy->spd = Enemy_spd[currentEnemy];
    Enemy->luck = Enemy_luck[currentEnemy];
}

void set_boss(Boss_t *boss, int currentBoss)
{
    boss->name = Boss_name[currentBoss];
    boss->hp = Boss_hp[currentBoss];
    boss->max_hp = boss->hp;
    boss->str = Boss_str[currentBoss];
    boss->def = Boss_def[currentBoss];
    boss->spd = Boss_spd[currentBoss];
}

void attack_enemy(Enemy_t *enemy, Player_t *player)
{
    int damage = player->str - enemy->def;
    if (damage < 0)
        damage = 0;
    enemy->hp -= damage;
    // if (enemy->hp < 0)
    //     enemy->hp = 0;
    // enemy->hp -= player->str;
}

void attack_player(Enemy_t *enemy, Player_t *player)
{
    int damage = enemy->str - player->def;
    if (damage < 0)
        damage = 0;
    player->hp -= damage;
    // if (player->hp < 0)
    //     player->hp = 0;
    // player->hp -= enemy->str;
}

void attack_boss(Boss_t *boss, Player_t *player)
{
    int damage = player->str - boss->def;
    if (damage < 0)
        damage = 0;
    boss->hp -= damage;
    // if (boss->hp < 0)
    //     boss->hp = 0;
    // boss->hp -= player->str;
}

void boss_attack_player(Boss_t *boss, Player_t *player)
{
    int damage = boss->str - player->def;
    if (damage < 0)
        damage = 0;
    player->hp -= damage;
    // if (player->hp < 0)
    //     player->hp = 0;
    // player->hp -= boss->str;
}

void heal_player(Player_t *player)
{
    player->hp += player->heal;
    if (player->max_hp <= player->hp)
    {
        player->hp = player->max_hp;
    }
}

void print_normal_fight_stats(Enemy_t *enemy, Player_t *player)
{
    my_print("==============================COMBAT==============================\n");
    my_print(enemy->name);
    my_print("\n");
    my_print("PV: ");
    my_print_n(enemy->hp);
    my_print(" / ");
    my_print_n(enemy->max_hp);
    my_print("\n");

    my_print(player->name);
    my_print("\n");
    my_print("PV: ");
    my_print_n(player->hp);
    my_print(" / ");
    my_print_n(player->max_hp);
    my_print("\n");
}

void print_boss_fight_stats(Boss_t *boss, Player_t *player)
{
    my_print("============================== COMBAT FINAL ==============================\n");
    my_print(boss->name);
    my_print("\n");
    my_print("PV: ");
    my_print_n(boss->hp);
    my_print(" / ");
    my_print_n(boss->max_hp);
    my_print("\n");

    my_print(player->name);
    my_print("\n");
    my_print("PV: ");
    my_print_n(player->hp);
    my_print(" / ");
    my_print_n(player->max_hp);
    my_print("\n");
}

void boss_opj_scenario(Player_t *player)
{
    my_print("============================== COMBAT FINAL ==============================\n");
    my_print("Quesque vous avez à dire pour votre defense Mr le ");
    my_print(player->name);
    my_print(" ?\n");
    sleep(2);
    my_print(" [1] Wallah c'est pas moi     [2] Bande de raciste \n");
    my_print(" [3] Gardez le silence\n");
    char *x = my_readline();
    switch (*x)
    {
    case '1':
        my_print("OPJ: Bon bah d'accord\n");
        my_print("OPJ: Il a dit Wallah\n");
        sleep(2);
        my_print("Bravo vous avez veski l'OPJ\n");
        sleep(1);
        my_print("Vous êtes libre.\n");
        return;
    case '2':
        my_print("OPJ: Vous êtes sérieux ? Vous avez agressé plusieurs membres des forces de l'ordre...\n");
        my_print("Et vous vous demandez pourquoi vous êtes ici ? Où est le racisme ?\n");
        sleep(2);
        my_print(" [1] Continuer a insulter     [2] S'excuser \n");
        x = my_readline();
        switch (*x)
        {
        case '1':
            my_print("OPJ: Bon il me soule\n");
            my_print("OPJ: Envoyer le en GAV\n");
            sleep(1);
            my_print("Vous êtes vraiment un guignole\n");
            my_print("Allez du balai !!\n");
            return;
        default:
            my_print("OPJ: Mais c'est trop tard\n");
            my_print("OPJ: Aller GAV\n");
            sleep(1);
            my_print("Vous êtes vraiment une peine perdu\n");
            return;
        }
    default:
        my_print("OPJ: Je n'ai pas votre temps\n");
        my_print("OPJ: Aller GAV\n");
        sleep(1);
        my_print("...\n");
        sleep(2);
        my_print("Sale merde\n");
        return;
    }
}

#endif