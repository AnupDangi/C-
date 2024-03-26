#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*Pointers are one 
of the core components of the C programming language. A pointer can be used to store 
the memory address of other variables, functions, or even other pointers. The use
 of pointers allows low-level memory access, dynamic memory allocation, and
 many other functionality in C.*/

void twoptrs();
void add();
void datatypes();
void ptrdynamicallocation();
void looppointerarray();
int main()
{
    int a=10;// static memory allocation of variable 
    int *ptr;// pointer declaration
    ptr=&a; // initialization

    printf("%d",*ptr+10);
    // intialized should be done to handle errors
    printf(" This is value at ptr =%p",ptr);
    printf("\n This is the value =%d ",a);
    printf("\n This is value at *ptr %d",a);
    // Another method to check pointer variable pointing to muliple variable  
    twoptrs();
    add();
    datatypes();
    ptrdynamicallocation();
    looppointerarray();
    return 0;
}

// Main point *ptr to access the pointer variable



// after printing the value of first memory address variable poitner can points to another variable

void twoptrs () {
    int num1 = 10;
    int num2 = 20;
    int *ptr;

    ptr = &num1; 
   // ptr = &num2;// if we assign the pointer variable mulitple variable value 
   // then it stores the last value assigned/updated to it
   // and the output will be 20 and 20 
        // Pointer ptr points to the memory address of num1
    printf("\nValue pointed to by ptr: %d\n", *ptr); // Output: 10

    // Now, suppose you want ptr to point to num2 instead of num1
 // This assigns the memory address of num2 to ptr

    ptr=&num2;
    // However, ptr now points to num2, not num1
    printf("Value pointed to by ptr: %d\n", *ptr); // Output: 20

    return;
}

void add(){
        
        // scan the variable and assign the pointers and point to it.
        int a,b;
        int *ptr1,*ptr2;
        ptr1=&a;
        ptr2=&b;
        int sum;
        printf("\n Enter two number");
        printf("\n Enter the first variable ");
        scanf("%d",&a);
        printf("\n Enter the second variable ");
        scanf("%d",&b);
        sum=(*ptr1)+(*ptr2);
        printf("\n Sum of two nubmers using pointers is %d",sum);
        return;
}

void datatypes()
{
    // #define max 5  this is a preprocessor directory which cannot be used inside a function 
    // rather use const 

        printf("\n These are the size of datatypes in bytes");
        printf("\n The size of boolean is :%d",sizeof(bool));
        printf("\n The size of short is: %d",sizeof(short));
        printf("\n The size of char is: %d",sizeof(char));
        printf("\n The size of int is: %d",sizeof(int));
        printf("\n The size of longint is: %d",sizeof(long int));
        printf("\n The size of float is: %d",sizeof(float));
        printf("\n The size of double is: %d",sizeof(double));
    const int max=100;
    int a=10;
    char b='a';
    double d=2.3;

    char name[max];// array
    // there are two ways to do print these values using 
    //1. Single pointer if has same datatype as we did in
    //2. No of variable pointers for each variable
    
     //(double) ptr=&d; // this is not valid for casting a datatype  
    int *iptr;
    char *cptr;
    double *dptr;
    char *sptr; // array pointer
    iptr=&a;
    cptr=&b;
    dptr=&d;
    printf("\n Int print %d",*iptr);
    printf("\n Char print %c",*cptr);
    printf("\n Double print %.2f",*dptr);
    printf("\n  Scan the name");
    scanf("%49s",name);
    sptr=name;// scan the name and assign to the pointer
    printf(" The pointer string variable is: %s\n",sptr);// arrays are stored in contiguous memory 
    //allocation so we dont need to use pointer for printing 

    return;
}

void ptrdynamicallocation()
{
    // now we are dynamically allocating the memory for ptr variable
    int *iptr;
    int a;
    iptr=(int*)malloc(sizeof(int));// we need to cast the ptr because 
    //malloc is a generic pointer and we need use the memory alloated typecast the malloc to the required memory type 
    iptr=&a;
    printf("\n Enter the value of a");
    scanf("%d",&a);
    printf("%d\n",*iptr);
}

void looppointerarray()
{
    printf("\n Printing the array of elements using pointer variable");
    int arr[5]={1,2,3,4,5};
    int *ptr_array=arr;// dont use &arr because this is array and we dont need to store the array address array itself acts as a pointer
    for(int i=0;i<5;i++)
    {
        printf("%d\t",*ptr_array++);
    }
}