#include<stdio.h>
#include<stdlib.h>

// Define the structure and typedef for struct dll pointer
typedef struct dll {
    char ssn[15], name[15], dept[15], desg[15], phone[15];
    int sal;
    struct dll *rlink, *llink;
} *node;

node head, p, temp, last;
int count = 0;

void create_node() {
    temp = (node)malloc(sizeof(struct dll));
    printf("\nEnter [ssn name department desgn, salary phone]: ");
    scanf("%s %s %s %s %d %s", temp->ssn, temp->name, temp->dept, temp->desg, &temp->sal, temp->phone);
    temp->rlink = NULL;
    temp->llink = NULL;
    count++;
}

void create_list(int n) {
    create_node();
    head = temp;
    last = temp;
    for (int i = 1; i < n; i++) {
        create_node();
        last->rlink = temp;
        temp->llink = last;
        last = temp;
    }
}

void insert_front() {
    create_node();
    temp->rlink = head;
    head->llink = temp;
    head = temp;
}

void insert_last() {
    create_node();
    temp->rlink = NULL;
    temp->llink = last;
    last->rlink = temp;
    last = temp;
}

void delete_front() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    temp = head;
    head = temp->rlink;
    if (head != NULL) {
        head->llink = NULL;
    }
    free(temp);
    count--;
}

void delete_last() {
    if (last == NULL) {
        printf("List is empty\n");
        return;
    }
    temp = last;
    last = temp->llink;
    if (last != NULL) {
        last->rlink = NULL;
    }
    free(temp);
    count--;
}


void display() {
    printf("\nThe Details for employees are given below:\n");
    for (p = head; p != NULL; p = p->rlink) {
        printf("%s %s %s %s %s %d\n", p->ssn, p->name, p->dept, p->desg, p->phone, p->sal);
    }
    printf("\nCount: %d\n", count);
}

int main() {
    int choice;
    while (1) {
        printf("\n---------------Menu--------------------\n");
        printf("1. Create List\n2. Insert Front\n3. Insert Last\n4. Delete Front\n5. Delete Last\n6. Display\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                create_list(2); // Example: Create a list with 2 nodes
                break;
            case 2:
                insert_front();
                break;
            case 3:
                insert_last();
                break;
            case 4:
                delete_front();
                break;
            case 5:
                delete_last();
                break;
            case 6:
                display();
                break;
            case 7:
                exit(0);
                break;
            default:
                printf("Enter a valid choice\n");
                break;
        }
    }
    return 0;
}





































// #include<stdio.h>
// #include<stdlib.h>

// //Doubly linked list

// struct dll
// {
//     char ssn[15],name[15],dept[15],desg[15],phone[15];
//     int sal;
//     struct dll *rlink,*llink;
// } *node;
// node *head,*p,*temp,*last;
// int count=0;
// void create_node()
// {
//     temp=(node*)malloc(sizeof (struct dll));
//     printf("\n Enter [ssn name department desgn, salary phone]");
//     scanf("%s %s %s %s %s %d",temp->ssn,temp->name,temp->dept,temp->desg,temp->phone,&temp->sal);
//     temp->rlink=NULL;
//     temp->llink=NULL;
//     count++;
// }

// //insert front
// void insert_front()
// {
//     create_node();
//     temp->rlink=head;
//     head->llink=temp;
//     head=temp;
// }
// //insert last
// void insert_last()
// {
//     create_node();
//     temp->rlink=NULL;
//     temp->llink=last;
//     last->rlink=temp;
//     last=temp;
// }

// //delete front
// void delete_front()
// {
//     temp=head;
//     head=temp->rlink;
//     free(temp);
//     count=count-1;
// }

// //delete last

// void delete_last()
// {
//     temp=last;
//     last=temp->llink;
//     last->rlink=NULL;
//     free(temp);
//     count=count-1;
// }
// void create_list(int n)
// {
//     create_node();
//     head=temp;
//     last=temp;
//     for(int i=1;i<n;i++)
//     {
//         insert_last();

//     }
// }

// //display

// void display()
// {

//     printf("\n The Details for employee are given below");
//     for(p=head;p!=NULL;[=p->rlink])
//     {
//         printf("\n %s %s %s %s %d",p->ssn,p->name,p->dept,p->desg,p->phone,p->sal);
//     }   
//     printf("\n Count :%d",count);
// }

// void main()
// {
//     int choice;
//     while(1)
//     {
//         printf("---------------Menu--------------------");
//         printf("\n 1.Create List \n 2.Insert Front \n 3.Insert Last \n 4.Delete Front 
//         \n 5.Delete Last
//         \n 6.Display \n 7.Exit");
//         printf("\n Enter your choice:");
//         scanf("%d",&choice);
//         switch (choice)
//         {
//         case 1: 
//                 create_list(2);
//             break;

//         case 2: 
//                 insert_front();
//                 break;
        
//         case 3: 
//                 insert_last();
//                 break;
            
//         case 4:
//                 delete_front();
//                 break;

//         case 5:
//                 delete_last();
//                 break;

//         case 6: 
//                 display();
//                 break;

//         case 7: 
//                 exit(0);
//                 break;

//         default:printf("\n Enter the valid choice");
//             break;
//         }        
//     }
// }
