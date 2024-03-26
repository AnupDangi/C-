#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Always define userdefined datatype 
//as globally before passing into function
typedef struct car
{
    char name[100];
    int speed;
}car;

void fun(car c)
{
    printf("%s",c.name);
    printf("\n%d",c.speed);
    return;
}

void change(car c)
{
    c.speed=100;
    strcpy(c.name,"Maruti");
    return;
}
int main()
{
    car c;
    strcpy(c.name,"Rolls Royace");
    c.speed=440;
    change(c);//calls to change the function
    printf("%s",c.name);
    printf("\n%d",c.speed);
    //remember that structures are passed by value so no change
    
    return 0;
}