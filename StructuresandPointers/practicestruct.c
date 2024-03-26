#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
typedef struct date{

    int date;
    int month;
    int year;
}date;

int main()
{
date date1,date2;


printf("\n There are two structures");
date1.date=5;
date1.month=12;
date1.year=2023;

date2.date=6;
date2.month=12;
date2.year=2023;
//if(date1==date2)// cannot compare user defined datatype gives error
if(date1.date==date2.date)
{
    printf("\n Dates are equal");
}
else{
    printf("\n Dates are not equal");
}

return 0;
}
