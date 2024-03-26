#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct person{
    int age;
    float weight;
    char name[50];
}person;


void change(person *p)
{
    //(*p).something==p->something
    //prefer arrow pointer to access
    (*p).age=90;//using one method
    p->weight=100;//another method
    strcpy(p->name,"Hari");
    return;
}   
int main()
{
    person p1;
    person *p=&p1;
    p1.age=23;
    p1.weight=68.7;
    strcpy(p1.name,"Ramesh");
    printf(" Printed values using struct variable\n");
    printf("%d\n",p1.age);//print through sturct variable
    printf("%f\n",p1.weight);
    printf("%s\n",p1.name);
    
    printf("\n Printed values using struct pointer variable\n");
    printf("%d\n",p->age);//print through pointers 
    printf("%f\n",p->weight);
    printf("%s\n",p->name);
    //look one major thing to understand i gave
    // the address of  p1 to pointer p 
    //while printing i printed with pointer p
    // it means it points to the variable and give us the output 
    change(&p1);//passing the var address to manipulate the data
    printf("\n Manipulated values using poitners\n");
    printf("%d\n",p->age);//print through pointers 
    printf("%f\n",p->weight);
    printf("%s\n",p->name);
    return 0;
}