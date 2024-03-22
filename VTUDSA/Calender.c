#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i;
typedef struct day
{
        char *dayname;
        int date;
        char *activity;
}calender;

calender *ptr;

//creating calender dynamically
void create()
{
    //dyanmically creates the size of calender struct 7 times of it
    ptr=(calender*)malloc(7*sizeof(calender));
    for(i=0;i<7;i++)
    {
        //dynamically store the the pointer instances ie dayname and activity
        (ptr+i)->dayname=(char*)malloc(10*sizeof(char));
        (ptr+i)->activity=(char*)malloc(10*sizeof(char));
    }
    if(ptr==NULL)
    {//if ptr is found null in memory or it cannot fetch any address then it will return memory allocation failed
        fprintf(stderr,"Memory allocation failed\n");
    }
}

    void read()
    //reading dayname and activity 
    {
        char tempday[20],tempact[20];
        for(i=0;i<7;i++)
        {
            printf("\nEnter the day: ");
            scanf("%s",(ptr+i)->dayname); // dont confuse with (ptr+i)->dayname it is used to access the dayname pointer 
                                            //instances  and ptr+i will increment to next pointer instances in memory 
            printf("\nEnter the date: ");
            scanf("%d",&(ptr+i)->date);
            printf("\n Enter the activity: ");
            scanf("%s",(ptr+i)->activity);                   
        }
    }


void display()
{
    printf("Day \t Date\t Activity\n");
    printf("-------------------------------------------\n");
    for(i=0;i<7;i++)
    {
        printf("%s\t",(ptr+i)->dayname);
        printf("%d\t",(ptr+i)->date);
        printf("%s\n",(ptr+i)->activity);
    }
    free(ptr);//freeing the memory
}

int main()
{
    int choice;
    printf("\n This is a calender for seven days:");
    while(1)
    {
        printf("\n 1.Create and read a calender");
        printf("\n 2.Display a calender");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
            create();
            read();
        break;
    
    case 2:
            display();
        break;
    
    default:printf("Enter the valid choice");
        break;
    }
    }
    return 0;
}