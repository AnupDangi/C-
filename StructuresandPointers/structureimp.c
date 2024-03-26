#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    // structure type 1 using typedef 
    typedef struct pokemon
    {
            int hp;
            int speed;
            int attack;
            char tier;
            char name[15];
    }pokemon;// alias for struct pokemon as pokemon only ie shortcut name

   // ptr=(pokemon*)malloc(sizeof(calendar));
    pokemon *ptr;// using pointer variable 
    pokemon var; // using variable 
    var.attack=100;
    ptr->speed=10;
    printf("\n Pokemon attack is %d",var.attack);//dot access
    printf("\n  Using Pointers Pokemon attack is %d",ptr->speed);// pointer access 

    
    int *p;
    int a=10;
    p=&a;
    printf("\n%d",*p);

    // another structure 
    struct Class
    {
        char Branch[15];
        char section;
        int noofStudents;
    }class;

    strcpy(class.Branch,"AIML");
    class.section='A';
    class.noofStudents=75;
    printf("\n This is a class struct");
    printf("\n The branch is %s",class.Branch);
    printf("\n The section is %c",class.section);
    printf("\n The total students are %d",class.noofStudents);

    // using pointers 
    struct Class *ptr1=&class;
    strcpy(ptr1->Branch,"CSE");
    ptr1->section='A';
    ptr1->noofStudents=80;
    printf("\n Using Pointers The branch is %s",ptr1->Branch);
    printf("\n Using Pointers The section is %c",ptr1->section);
    printf("\n  Using Pointers The total students are %d",ptr1->noofStudents);
    
    return 0;
}


