#include<stdio.h>
#include<stdlib.h>
#define Max 100

// employee is like a class in java which has its attributes 

// when there is only one type of data we use linear
struct employee
{
    // these are the attributes of employee structure
    // array can be used in structure for its data /attributes 
    int emp_id[Max];
    char name[Max][Max];
    float salary[Max];
    int desgn[Max];
};//emp,found;

// a employee structure function which takes n number of employee data in struct format and print
void employeestruct()
{       
        struct employee emp;  
        int no_employee;
        printf("\n Enter the number of employee");
        scanf("%d",&no_employee);
      
        for(int i=0;i<no_employee;i++)
        {
            //arrays of variable
            printf("\n Enter the employee id[%d] :",i);
            scanf("%d",&emp.emp_id[i]);
            printf("\n Enter the employee name[%d] :",i);
            scanf("%s",emp.name[i]);
            printf("\nEnter the employee salary[%d]: ",i);
            scanf("%f",&emp.salary[i]);
        }

        for(int i=0;i<no_employee;i++)
        {
            printf("\n");
            printf("%d\t",emp.emp_id[i]);
            printf("%s\t",emp.name[i]);
            printf("%f\t",emp.salary[i]);
        }
}

// a founders structure function which takes n number of founder data in struct format and print

void founders()
{       
        struct employee found;  
        int no_founders;
        printf("\n Enter the number of founders");
        scanf("%d",&no_founders);
      
        for(int i=0;i<no_founders;i++)
        {
            printf("\n Enter the founders id[%d] :",i);
            scanf("%d",&found.emp_id[i]);
            printf("\n Enter the founders name[%d] :",i);
            scanf("%s",found.name[i]);
            printf("\nEnter the founders salary[%d]: ",i);
            scanf("%f",&found.salary[i]);
        }

        for(int i=0;i<no_founders;i++)
        {
            printf("\n");
            printf("%d\t",found.emp_id[i]);
            printf("%s\t",found.name[i]);
            printf("%f\t",found.salary[i]);
        }
}

int main()
{
    printf("\n call the employee structure ");
    employeestruct();
    founders();

    return 0;
}