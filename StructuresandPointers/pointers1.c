#include<stdio.h>
#include<stdlib.h>

typedef int* pointer;// for integer pointer give the name as pointer 
int main()
{
    int x=5,y=7;
    pointer a=&x,b=&y;//
    printf("Value%d\n:",*a);
    printf("Value%d\n: ",*b);
    printf("Pointer value :%d \n",a);
    printf("Pointer value: %d\n",b);
    printf("Pointer address: %p\n",a);
    printf("Pointer value: %p \n",b);
    return 0;
}

