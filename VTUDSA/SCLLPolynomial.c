#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//singly circular linked list

struct node{
    int coef;
    int expox, expoy,expoz;
    struct node *next;
};

typedef struct node *Node;

//global declaration
Node header=NULL,temp=NULL;

//creating the headernode which will point to itself at first and initializing the coef  and expo 
void createHeadNode()
{
    header=(Node)malloc(sizeof(struct node));
    header->coef=0;
    header->expox=-1;
    header->expoy=-1;
    header->expoz=-1;
    header->next=header;// this pointes to itself 
}

//creating another node 
//taking input for coef of x exp of x ,yand z respectively
void createNode()
{
    temp=(Node)malloc(sizeof(struct node));
    printf("\n Enter the coefficient");
    scanf("%d",&temp->coef);
    printf("\n Enter the exponent of x: ");
    scanf("\n %d",&temp->expox);
    printf("\n Enter the exponent of y: ");
    scanf("\n %d",&temp->expoy);
    printf("\n Enter the exponent of z: ");
    scanf("%d",&temp->expoz);
    temp->next=temp;
    //The below line will keep track of number of coef  that means no of polyomial terms inserted
    header->coef=(header->coef)+1;
}

//implementaing the linked list using queue insertion takes place from rear
void insertRear()
{

    Node current;
    createNode();//calls the create node function
    if(header->next==header)
    {
        header->next=temp;
    }
    else{
        current=header;
        while(current->next!=header)
        {
            current=current->next;
        }
        current->next=temp;//this points to another newly created node
    }
    temp->next=header;//the newly created node points back to header
    printf("\n Number of terms %d \n ",header->coef);
}

//displaying all the nodes
void display()
{
    Node current;
    if(header->next==header)
    {
        printf("\nList is empty");
    }
    else{
        current =header->next;
    //traversing the current node until it reaches the first node which is header 
    while(current!=header)
    {
        //current coef is less than it is negative polynomial so print 
        if(current->coef <0)
        {
            printf("-%d x^%dy^%dz^%d",current->coef,current->expox,current->expoy,current->expoz);
        }
        else{
            printf("+%d x^%dy^%dz^%d",current->coef,current->expox,current->expoy,current->expoz);
        }
        current=current->next;//current node points to another node updated
    }
}
    printf("\n Number of terms=%d \n ",header->coef);
}



void evaluate()
{
        double result =0;
        int x,y,z;
        Node current;

        //taking input values for x, y and z
        printf("Enter the value of x");
        scanf("%d",&x);
        printf("\n Enter the value of y");
        scanf("%d",&y);
        printf("\n Enter the value of z");
        scanf("%d",&z);

        //Checking whether the polynomial is empty or not

        if(header->next==header)
        {
            printf("List is empty");
        }
        else
        {
            current=header->next;
            while(current!=header)
            {
                result+=current->coef *pow(x,current->expox)*pow(y,current->expoy),pow(z,current->expoz);
                current=current->next;
            }
            printf("\n Polynomial Evaluation value =%.2f",result);
        }
}
void main()
{
     int iterator,numberofCoef;
     //call create headnode 
     createHeadNode();
     printf("Enter th number of terms in Polynomial ");
     scanf("%d",&numberofCoef);

     //Insert terms into the polynomial
     for(iterator=0;iterator<numberofCoef;iterator++)
     {
        insertRear();
     }
     // this displays and evaluate the polynomial by calling it
     display();
     evaluate();
}