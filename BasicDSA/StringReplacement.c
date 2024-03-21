#include<stdio.h>
#include<stdlib.h>

int stringlen(char str[]);
void stringcat(char dest[],char src[]);

void main()
{
    int i=0,j,k=0,flag=0;
    char str[20],pat[15],rep[15],result[30];
    printf("Enter string \n");
    gets(str);
    printf("Enter pattern\n");
    gets(pat);
    printf("\n Enter subsitution key\n");
    gets(rep);                                                        

    //traversing until the last character of the string

    while(str[i]!='\0')
    {
        j=0;
        //first comapre string from i to j  and j is index of pattern which is compared with 
        // string and pattern till end of pattern
        while((str[i+j]==pat[j])&&(pat[j]!='\0'))
        {
            j++;
        }
        if(pat[j]=='\0')
        {
            flag=1;
            result[k]='\0'; 
            stringcat(result,rep);
            k+=stringlen(rep);
            i=i+(j-1);
        }
        else{
            result[k++]=str[i];
        }
        i++;
    }
    result[k]='\0';
    printf("The result is \n ");
    if(flag)
        puts(result);
    else
        printf("Pattern not found");
}

int stringlen(char str[])
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    return len;
}

void stringcat(char dest[],char src[])
{
    int i=0,j=0;
    while(dest[i]!='\0')
    {
        i++;
    }
    while(src[j]!='\0')
    {
        dest[i+j]=src[j];
        j++;
    }
    return;
}



// #include<stdio.h>
// char str[100], pat[50], rep[50], ans[100];
// int i, j, c, m, k, flag=0;
// void stringmatch()
// {
// i = m = c = j = 0;
// while(str[c]!='\0')
// {
// if(str[m]==pat[i]) 
// {
// i++; m++;
// if(pat[i]=='\0') 
// {
// flag = 1;
// for(k = 0; rep[k] != '\0'; k++, j++)
// ans[j] = rep[k];
// i = 0;c = m;
// }
// } 
// else 
// {
// ans[j] = str[c];
// j++;c++; m = c;i = 0;
// }
// }
// ans[j] = '\0';
// }
// int main()
// {
// printf("\nEnter a main string \n");
// gets(str);
// printf("\nEnter a pattern string \n");
// gets(pat);
// printf("\nEnter a replace string \n");
// gets(rep);
// stringmatch();
// if(flag==1)
// printf("\nThe resultant string is\n %s" , ans);
// else
// printf("\nPattern string NOT found\n");
// return 0;
// }