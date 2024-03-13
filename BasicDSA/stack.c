// 
// #include<stdio.h>
// #include<stdlib.h>
// #define Max 5 // use #define instead of define
// int top=-1;
// int stack[Max];
// int item;
// //Push
// //Pop
// //Palindrome
// //display

// //Pushing item inside the stack
// void Push(int item) // add int before item
// {
//     if (top==Max-1)
//     {
//         printf("Stack Overflow\n"); // add \n at the end
//     }
//     else
//     {
//         top++;
//         stack[top]=item;
//     }
// }
// //Poping item inside the stack
// void Pop()
// {
//     if (top<0)
//     {
//         printf("Stack underflow\n"); // add \n and ; at the end
//     }
//     else{
//         printf("Item popped %d\n",stack[top]); // remove & before stack[top] and add \n at the end
//          top--;
//     }
// }
// void display()
// {
//     if (top<0)
//     {
//         printf("Stack is empty No elements");
//     }
//     else{
//     for(int i=0;i<=top;i++)
//     {
//         printf("%d ",stack[i]); // add space after %d
//     }
//  }
//     printf("\n"); // add \n at the end
// }
// int main() // add int before main
// {
//     int ch,n;
//     printf("\n1.Push item inside the stack \n");
//     printf("\n2.Pop element outside the stack \n");
//     printf("\n3.Dispaly the stack \n");
//     printf("\n4.Exit\n");
//     printf("Enter your choice ");
//     scanf("%d",&ch);
//     for(;;) // remove ch from for loop
//     {
//         switch (ch)
//         {
//         case 1:printf("Enter the number of items you want to enter from[1-5]");
//                 scanf("%d",&n);
//                  for ( int i = 0; i < n; i++)
//                 {
//                 printf("\nEnter the element ");
//                 scanf("%d",&item);
//                 Push(item);
//                 }
//                 break;
//         case 2: Pop();
//             break;
//         case 3: display();
//             break;
//         case 4: exit(0);
//         break;
//         default:printf("You entered an invalid choice. If you want to exit, choose 4\n"); // add . and \n at the end
//             break;
//         }
//         printf("Enter your choice "); // add this line to repeat the choice
//         scanf("%d",&ch); // add this line to update the choice
//     }
//     return 0; // add this line to return 0 from main
// }

#include<stdio.h>
#include<stdlib.h>
#define Max 5
int top=-1;
int stack[Max];
int item;
//Push
//Pop
//Palindrome
//display
//Pushing item inside the stack
void Push( int item)
{
    if (top==Max-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top]=item;
    }
}
//Poping item inside the stack
void Pop()
{
    if (top<0)
    {
        printf("Stack underflow");
    }
    else{
        printf("Item popped %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if (top<0)
    {
        printf("There is no elements inside this stack\n");
    }
    else{
    printf("The element inside the stack are\n: ");
    for(int i=0;i<=top;i++)
    {
        printf("%d ",stack[i]);
    }
    }
}
void main()
{
    int ch,n;
   
    for(;;)
    {
    printf("\n1. Push items inside the stack ");
    printf("\n2. Pop items outside of the stack ");
    printf("\n3. Display the stack ");
    printf("\n4.Exit\n");
    printf("Enter your choice");
    scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        printf("\nEnter the number of elements you want to enter between [1-5]: ");
                scanf("%d",&n);
                for (int  i = 0; i < n; i++)
                {
                printf("Enter the element ");
                scanf("%d",&item);
                Push(item);
                }
                break;
        case 2: 
        Pop();
            break;
        case 3:
         display();
            break;
        case 4:
         exit(0);
        break;
        default:printf("You entered a invalid choice if you want to exit choose 4");
            break;
        }
    }
} 