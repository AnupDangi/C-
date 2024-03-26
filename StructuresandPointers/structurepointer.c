#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;
int main()
{
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");
    pokemon *x=&pikachu;// pointer x pointing to pokemon struct first data
   
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",pikachu.name);
    printf("%p\n",x);// pikachu.hp address and pointer address are same because it points to first member
    
    return 0;
}
