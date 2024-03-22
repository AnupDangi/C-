#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
//define the variable for operators ,result, symbol ,postfix array and s for stack to keep track of element on top
double s[20],res,op1,op2;
int top,i;
char postfix[20],symbol;


//compute the postfix expression  for all the operators 
double compute()
{
    switch(symbol)
    {
        case '+':
            return op1+op2;

        case '-':
            return op1-op2;
        
        case '*':
            return op1*op2;
        
        case '/':
            return op1/op2;
        
        case '%':
            return (int)op1%(int)op2;
        
        case '^':
            return pow(op1,op2);
        
        default: 
            return 0;
    }
}


int main()
{
    //scan 
    printf("\n Enter the postfix expression");
    gets(postfix);

    top=-1;
    //traverse till the end of postfix length which is scanned using index
    for(i=0;i<strlen(postfix);i++)
    {
        symbol=postfix[i];
        //check the symbol either it is digit or not 
        //if so top is incremented and pushed inside the stack
        //
        if(isdigit(symbol))
        {
            s[++top]=symbol-'0';//check the digit and subtract with '0' as a character
        }
        //now it means it is a operator so we need to perform operations
        //the top most element is popped and the calls compute function 
        // again after returning from compute function it push inside the stack 
        else{
            op2=s[top--];
            op1=s[top--];
            res=compute();
            s[++top]=res;
        }
    }
    //finally whatever is there inside the stack is stored inside the res popping out

    res=s[top--];
    printf("\n The result is %.2f\n",res);
    return 0;
}