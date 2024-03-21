#include<stdio.h>
#include<stdlib.h>
#define Max 10
int HT[Max]={0},f[Max];
int indexx;
int id;
char name[20];
float salary;

//linearly probe key and increment k as index to k+1 
void linprobe(int k,int key)
{
    indexx=k%key;
    if(HT[indexx]==0)
    {
        HT[indexx]=key;
    }
    else{
    linprobe(k+1,key);
    }
}

void display()
{   
    printf("\n The Hash table is given below");
    for(int i=0;i<Max;i++)
    {
        printf("\n HT[%d]: %d",i,HT[i]);
    }
}

void main()
{
    int i=0;
    FILE *fp;
    fp=fopen("emp.txt","r");
    printf("\n Reading File");
    //Read the file 
    do{
        fscanf(fp,"%d %s %f",&id,name,&salary);
        printf("\n%d %s %.2f",id,name,salary);
        f[i++]=id;//increment the file index and assign to id 
        // based on id assign the key value to the table
    }while(!feof(fp));//end of file fp read 

    for(i=0;i<Max;i++)
    {
        //index is file id mod file size
        indexx=f[i]%Max;
        if(HT[indexx]==0)
        {
            HT[indexx]=f[i];
        }
        //index is not 0 use linear probing 
        else{
            // call the linearprobing incrementing the index 
            linprobe(f[i]+1,f[i]);
        }
    }
    display();
}

















// #include<stdio.h>
// #include<stdlib.h>
// #define Max 10
// int f[Max],HT[Max]={0},indexx;
// int id;
// char name[20];
// float salary;
// void linprobe(int k,int key)
// {
//     indexx=k%Max;
//     if(HT[indexx]==0)
//     {
//         HT[indexx]=key;
//     }
//     else
//         linprobe(k+1,key);
// }

// void display()
// {
//     int i=0;
//     printf("\n Hash Table");
//     for(i=0;i<Max;i++)
//     {
//         printf("\nHT[%d]:%d",i,HT[i]);
//     }
// }

// void main()
// {
//     FILE *fp;
//     fp=fopen("emp.txt","r");
//     int i=0;
//     printf("\n File");
//     do{
//         fscanf(fp,"%d %s %f",&id,name,&salary);
//         printf("\n%d %s %.2f",id,name,salary);

//         f[i++]=id;
//     }while(!feof(fp));

//     for(i=0;i<Max;i++)
//     {
//         indexx=f[i]%Max;
//         if(HT[indexx]==0)
//         {
//             HT[indexx]=f[i];
//         }
//         else{
//             linprobe(f[i]+1,f[i]);
//         }
//     }
//         display();           
// }