#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Student
{
    int rollno;
    char name[100];
    char department[100];
    char course[50];
    int year;
}student;


void check(student s1,student s2)
{
     if(strcmp(s1.department,s2.department)==0)
    {
        printf("\n Department is common");
    }
    else{
        printf("Nothing in common");
    }
    return;
}
int main()
{
    student s1,s2;  

    s1.rollno=1;
    strcpy(s1.name,"Anup");
    strcpy(s1.department,"AIML");
    strcpy(s1.course,"BE");
    s1.year=2022;
    s2.rollno=2;
    strcpy(s2.name,"Bishal");
    strcpy(s2.department,"AIML");
    strcpy(s2.course,"BE");
    s2.year=2022;
    check(s1,s2);
    return 0;
}