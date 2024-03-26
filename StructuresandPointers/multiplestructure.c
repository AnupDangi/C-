#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
}pokemon;

int main()
{
pokemon a,b,c;

a.attack=100;
a.hp=100;
a.speed=90;
a.tier='A';
strcpy(a.name,"Charizard");

    b=a;//  deep copy can be used
    b.attack=200;// can be changed manipulated
    printf("%d",b.attack);
    printf("\n%s",b.name);
 return 0;
}