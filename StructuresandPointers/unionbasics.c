#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// we can use only one member at a time

typedef union pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;

int main()
{
    pokemon pk;
    pk.hp=60;
    pk.attack=70;
    pk.speed=100;
    pk.tier='A';
    strcpy(pk.name,"Pikachu");
    printf("\n%d",pk.hp);
    printf("\n%d",pk.attack);
    printf("\n%d",pk.speed);
    printf("\n%c",pk.tier);
    printf("\n%s",pk.name);
    return 0;


    //look we got the output as this for this value
        //1634429264
        // 1634429264
        // 1634429264
        // P
        // Pikachu

// union size in memory is based on maximum datatype memory
// for this case we have char name[15] ie 15 bytes
// in memory it contains  15 bytes memory 
// whenever a member is assigned with value is stored in union memory block
// every time a initialized value is overridden by new member memory value
// for integer its take same memory space and you are getting same no 
// and P is the alphabet you are getting for character
// Pikachu is being printed at last same as it contains the larger memory   
}

