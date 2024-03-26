#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 100

struct book{
    char name[Max];
    float price;
    int no_ofpages;
}book[Max];//structure array

void structurebook()
{
    int noOf_book;
    char name[Max];
    printf("\n Enter the nubmer of books");
    scanf("%d",&noOf_book);
    getchar();
   for(int i=1;i<=noOf_book;i++)
    {
        printf("\nEnter book name ,price and no_ofpages respectively: ");
        printf("\n Enter book [%d] details",i);
        fgets(book[i].name,Max,stdin);//reads string inputs safely without string buffer
        strtok(book[i].name,"\n");
        scanf("%f",&book[i].price);
        scanf("%d",&book[i].no_ofpages);
        getchar();
    }

    for(int i=1;i<=noOf_book;i++)
    {
        printf("\n Book [%d] details",i);
        printf("Name :%s",book[i].name);
        printf("Price%f\n",book[i].price);
        printf("Pages %d\n",book[i].no_ofpages);
    }

}

int main()
{
    structurebook();
    return 0;
}