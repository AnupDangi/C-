#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    // struct 1
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

    // struct 2
    //    typedef struct legendarypokemon{
    //     int hp;
    //     int speed;
    //     int attack;
    //     char tier;
    //     char name[15];
    // }legendarypokemon;
    // rather than writing this use nested structures


    typedef struct legendarypokemon
    {
        pokemon normal;
        char ability[100];
    }legendarypokemon;

    legendarypokemon mewtow;
    strcpy(mewtow.ability,"Pressure");
    mewtow.normal.hp=150;
    mewtow.normal.attack=180;
    strcpy(mewtow.normal.name,"Mewtow");
    printf("%s",mewtow.normal.name);

    typedef struct godpokemon
    {
        legendarypokemon mewtow;
        char specialattack[100];
    }godpokemon;
    
    
    godpokemon God;
    strcpy(God.specialattack,"Turns Anyone to stone");
    God.mewtow.normal.attack=100;
    printf("\n%s",God.specialattack);
    printf("\n%d",God.mewtow.normal.attack);
    

    return 0;
}