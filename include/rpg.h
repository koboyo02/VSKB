#ifndef RPG_H_
#define RPG_H_
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct Player {
    const char *name;
    int hp;
    int max_hp;
    int def;
    int str;
    int spd;
    int luck;
    int heal;
} Player_t;

typedef struct Enemy_s
{
    char *name;
    int hp;
    int max_hp;
    int str;
    int def;
    int res;
    int spd;
    int luck;
} Enemy_t;

typedef struct Boss_s
{
    char *name;
    int hp;
    int max_hp;
    int str;
    int def;
    int res;
    int spd;
} Boss_t;

#endif /* !RPG_H_ */
