#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// One of the application of best example to learn recursion in stack 
// consider there are three stacks start, aux and end 
//firstly all the dics are placed on start stack
// we need to move discs one by one 
//the disc are arranged in decreasing order meaning the last disc is greater 
// than the top most disk 
// the most important point for placing the disk is given below
//we cant place the smaller dics below larger dics 


//tower of hanoi start , aux and end 
void tower(int n, char start,char aux, char end)
{
    if(n==0)
    {
        return;
    }
    //Move n-1 disks from start to aux using end as auxiliary
    tower(n-1,start,end,aux);
    printf("\n Move disc %d from %c to %c",n,start,end);
    
    // Move n-1 disks from aux to end using start as auxiliary
    tower(n-1,aux,start,end);
}

int main()
{
    int n;
    printf("\n Enter the number of dics: ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    printf("\n\n Total Number of moves are: %d",(int)(pow(2,n)-1));
    return 0;
}