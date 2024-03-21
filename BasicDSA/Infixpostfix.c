// #include<stdio.h>
// #include<stdlib.h>
// #include<ctype.h>
// #include<string.h>

// #define MAX 50
// int top=-1;
// char stack[MAX];
// void push(char item)
// {
//       if (top == MAX - 1) {
//         printf("Stack Overflow\n");
//         exit(EXIT_FAILURE);
//     }
//     stack[++top]=item;
// }
// char pop()
// {
//     if (top == -1) {
//         printf("Stack Underflow\n");
//         exit(EXIT_FAILURE);
//     }
//     return(stack[top--]);
// }

// int precedence(char c)
// {
//     switch(c)
//     {
//         case '(':
//          return 1;

//         case '+':
//         case '-':
//             return 2;

//         case '*':
//         case '/':
//         case '%':
//             return 3;

//         case '^':
//         case '$':
//             return 4;

//         default :
//         return 0;
//     }
// }

// int main()
// {
//     char infix[MAX],postfix[MAX];
//     int i;
//     int j=0;
//     printf("\n Enter the infix expression");
//     scanf("%s",infix);

//     for(i=0;i<infix[i]!='\0';i++)
//     {
//         if(isalnum(infix[i]))
//         {
//             postfix[j++]=infix[i];
//         }
//         else if(infix[i]=='(')
//             push(infix[i]);
//         else if(infix[i]==')')
//         {
//             while(stack[top]!='(')
//             {
//                 postfix[j++]=pop();
//             }
//             pop();
//         }
//         else{
//             while( top!=-1 && precedence(stack[top])>=precedence(infix[i]))
//             {
//                 postfix[j++]=pop();
//             }
//             push(infix[i]);
//         }
//     }
//     while(top!=-1)
//     {
//         postfix[j++]=pop();
//     }
//     postfix[j]='\0';
//     printf("Postfix :%s",postfix);
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 50

int top = -1;
char stack[MAX];

void push(char item) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = item;
}

char pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack[top--];
}

int precedence(char c) {
    switch (c) {
        case '(':
            return 1;
        case '+':
        case '-':
            return 2;
        case '*':
        case '/':
        case '%':
            return 3;
        case '^':
            return 4;
        default:
            return 0;
    }
}

int main() {
    char infix[MAX], postfix[MAX];
    int i, j = 0;

    printf("Enter the infix expression: ");
    scanf("%s", infix);

    for (i = 0; infix[i] != '\0'; i++) {
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        } else if (infix[i] == '(') {
            push(infix[i]);
        } else if (infix[i] == ')') {
            while (stack[top] != '(') {
                postfix[j++] = pop();
            }
            pop(); // Discard the '(' from stack
        } else {
            while (top != -1 && precedence(stack[top]) >= precedence(infix[i])) {
                postfix[j++] = pop();
            }
            push(infix[i]);
        }
    }
    while (top != -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';

    printf("Postfix: %s\n", postfix);
    return 0;
}
