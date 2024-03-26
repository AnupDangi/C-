#include<stdio.h>
#include<stdlib.h>

void doublepointer();

void swapbyval(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    return;
}
void swapbyref(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main()
{
  //  int *ptr1,*ptr2;
    int a=2;
    int b=5;
    // ptr1=&a;
    // ptr2=&b;
    // pass by value and pass by refrences
    swapbyval(a,b);
    printf("\n The swapped value of a is %d",a);
    printf("\n The swapped value of b is %d",b);
    swapbyref(&a,&b);
     printf("\n The swapped value of a is %d",a);
    printf("\n The swapped value of b is %d",b);
    doublepointer();
    return 0;
}

void doublepointer()
{
    int a=25;
    int *x=&a;
    int **y=&x;//double pointer points to the pointer which points to the address of another variable
    int ***z=&y;
    printf("\n%p",*x);// %p is address of x pointer
    printf("\n%d",**y);// double pointer y contains the address of x and x contains the address of a and all will be printed
    printf("\n%d",y);
    printf("\n%d",***z);
    return;
}