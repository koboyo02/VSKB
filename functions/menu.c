#ifndef FN_MENU
#define FN_MENU

#include "./input.c"
#include "./output.c"
#include "../include/Players.h"

Player_t *select_characters_menu(char skip_intro)
{
    if (0 == skip_intro)
    {
		my_print("                          \\vous êtes actuellement dans le BANDO des OG Slash/ \n\n");
        my_print("                                    --| CHOISISSEZ VOTRE PERSONNAGE |-- \n\n");
    }
    my_print("Tapez 1 pour choisir le dealeur ou 2 pour le guetteur\n");
    char *x = my_readline();
    Player_t *player = malloc(sizeof(Player_t));
    if ('1' == *x)
    {
        player->name = Player_name[0];
        player->hp = Player_hp[0];
        player->max_hp = Player_hp[0];
        player->def = Player_def[0];
        player->str = Player_str[0];
        player->spd = Player_spd[0];
        player->luck = Player_luck[0];
        player->heal = Player_heal[0];

        my_print("Tu es le dealeur\n");
        return player;
    }
    if ('2' == *x)
    {
        player->name = Player_name[1];
        player->hp = Player_hp[1];
        player->max_hp = Player_hp[1];
        player->def = Player_def[1];
        player->str = Player_str[1];
        player->spd = Player_spd[1];
        player->luck = Player_luck[1];
        player->heal = Player_heal[1];

        my_print("Tu es le guetteur\n");
        return player;
    }
    return select_characters_menu(1);
}

unsigned short int ask_action_for_normal_fight(void)
{
    my_print(" [1] Attaquer              [2] Se Soigner\n");
    my_print(" [3] Fuir\n");

    char *input = my_readline();
    switch (*input)
    {
    case '1':
       return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    }
    return ask_action_for_normal_fight();
}

#endif
