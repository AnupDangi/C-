#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct cricketer
{
    char name[100];
    int age;
    int testmatches;
    int avgruns;
}cricketer;

void cricketdetails()
{
    int num;
    printf("\n Enter the number of cricketers: ");
    scanf("%d",&num);
    getchar();
    // cricketers array
    cricketer arr[num];
    for(int i=0;i<num;i++)
    {
        printf("\nEnter the name: ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);

        printf("\n Enter the age: ");
        scanf("%d",&arr[i].age);
        printf("\n Enter the testmatches: ");
        scanf("%d",&arr[i].testmatches);
        printf("\n Enter the avgruns: ");
        scanf("%d",&arr[i].avgruns);
        getchar();// consume newline characters left in buffer
    }

    printf("\n");
    for(int i=0;i<num;i++)
    {
        printf("\n Enter the name:%s ",arr[i].name);
        printf("\n Enter the age:%d",arr[i].age);
        printf("\n Enter the testmatches: %d",arr[i].testmatches);
        printf("\n Enter the avgruns:%d ",arr[i].avgruns);
    }
    return;
}

int main()
{
    cricketdetails();
    return 0;
}