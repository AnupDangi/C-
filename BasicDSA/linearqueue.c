#define N 5
#include<stdlib.h>
#include<stdio.h>
int queue[N];
int front =-1;
int rear=-1;

//insertion method of elements in queue
void enqueue( int item)
{
    if(rear==N-1)
    {
        printf("overflow ");//queue is full 
    }
    else if (front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=item;
    }
    else{
        rear++;
        queue[rear]=item;
    }
}
//To delete the elements from queue
void dequeue()
{
    if (front==-1&&rear==-1)
    {
        printf("Queue is empty ");
    }
    else 
    { 
        printf(" %d is dequeued from the queue ",queue[front]);
         front++;
    }
}  
//Displaying the queue
void display()
{
    if(front==-1&&rear==-1)
    {
        printf("Underflow\n");
    }
    else{
        printf("The queue elements are : \n");
        for(int i=front;i<=rear;i++)
        printf("%d ",queue[i]);
    }
} 
void main()
{int ch,n,item;
 printf("\n1.Enter elements inside the queue");
 printf("\n2.Deletion of a queue ");
 printf("\nDisplay of queue");
 printf("\n4.Exit \n");
    while (1)
    {
        printf("\nEnter a choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the number of elements\n");
            scanf("%d",&n);
            for(int j=0;j<n;j++)
            {
                printf("Enter the element\n");
                scanf("%d",&item);
                enqueue(item);
            }
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default:printf("Wrong choice (if you want to exit choose 4 )");
            break;
        }
    }
}
    
// }
// #define N 5
// #include<stdlib.h>
// #include<stdio.h>
// int queue[N];
// int front =-1;
// int rear=-1;

// //insertion method of elements in queue
// void enqueue(int item)
// {
//     if(rear==N-1)
//     {
//         printf("Queue overflow\n");//queue is full 
//     }
//     else if (front==-1 && rear==-1)
//     {
//         front=rear=0;
//         queue[rear]=item;
//     }
//     else{
//         rear++;
//         queue[rear]=item;
//     }
// }
// //To delete the elements from queue
// void dequeue()
// {
//     if (front==-1||front>rear)
//     {
//         printf("Queue is empty\n");
//     }
//     else 
//     { 
//         printf("%d dequeued from the queue\n", queue[front]);
//         front++;//front =front+1;
//     }
// }  
// void display()
// {
//     if(front==-1 ||front>rear)
//     {
//         printf("Underflow\n");
//     }
//     else{
//         printf("The elements of the queue are:\n");
//         for(int i=front;i<=rear;i++)
//         printf("%d ",queue[i]);
//         printf("\n");
//     }
// } 
// int main()
// {
//     int ch, n, item;
//     printf("\n1.Enter elements inside the queue");
//     printf("\n2.Deletion of a queue ");
//     printf("\n3.Display of queue");
//     printf("\n4.Exit ");
//     while (1)
//     {
//         printf("\nEnter a choice ");
//         scanf("%d",&ch);
       
//         switch(ch)
//         {
//             case 1:
//                 printf("Enter the number of elements\n");
//                 scanf("%d",&n);
//                 for(int j=0;j<n;j++)
//                 {
//                     printf("Enter the element\n");
//                     scanf("%d",&item);
//                     enqueue(item);
//                 }
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 return 0;
//                 break;
//             default:
//                 printf("Wrong choice\n");
//                 break;
//         }
//     }
    
// }
