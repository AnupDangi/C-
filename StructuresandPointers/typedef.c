#include<stdio.h>
#include<stdlib.h>

//use of typedef is used as (renaming ) any datatype
typedef int integernumber; // integernumber 
// typedef float (or any other datatype) and nickname for it;
int main()
{
    integernumber x=5;// 
    printf("%d",x);
    float y; //decimal
    structurebook();
    return 0;
}
// typedef is mostly used for any struct or union ie derived datatypes

typedef struct book
{
    char name[500];
    int noOfPages;
    float price;
}book;//alias shortcutname 

 book a;
 book b;
 book c;

void structurebook()
{
    char name;
    printf("\n Enter the Book 1 details");
    /*scanf(“%[^\n]s”, sen) means to read a string including spaces until the next line
     is received or to read string until line break i.e.
     \n is encountered and store it on an array named “sen”.
        Here, %[ ] is the scanset specifier.
        scanf will process only those characters which are part of scanset.
        If the first character of the scanset is ‘^’, then the specifier will stop reading
         after the first occurrence of that character.
        ^\n  stands for taking input until a newline isn’t encountered.*/

    //scanf("%[^\n]s",a.name);// to read a sentence use this until the end of new line read
    //OR use fgets function or gets 
    gets(a.name); //scans sentence including whitespace
    scanf("%d \n%f",&a.noOfPages,&a.price);
    printf("\n This is the Book1 details\n");
    printf(" %s \n%d \n%.2f",a.name,a.noOfPages,a.price);
    
}


