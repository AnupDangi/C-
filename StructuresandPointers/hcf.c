#include<stdio.h>
#include<stdlib.h>

int min(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    else{
        return b;
    }
}

int gcd(int a, int b)
{
    int hcf;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 &&b%i==0)
        {
            hcf=i;
        }
    }
    return hcf;
}
int lcm(int a,int b)
{
    int lcm=(a*b)/gcd(a,b);
    return lcm;
}
int main()
{
    int a,b;
    printf("\n Enter the first number");
    scanf("%d",&a);
    printf("\n Enter the second number");
    scanf("%d",&b);
    int hcf=gcd(a,b);
    printf("\n the HCF/GCD of %d and %d is %d",a,b,hcf);
    printf("\n The lcm is %d",lcm(a, b));
    return 0;
}