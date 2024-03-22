// /*7) Develop a menu driven Program in C for the following operations on Singly Linked List (SLL) of Student Data with the fields: 
// USN, Name, Programme, Sem, PhNo 
// a. Create a SLL of N Students Data by using front insertion. 
// b. Display the status of SLL and count the number of nodes in it 
// c. Perform Insertion / Deletion at End of SLI 
// d. Perform Insertion / Deletion at Front of SLL(Demonstration of stack) 
// e. Exit */

// Including necessary header files
# include<stdio.h> 
# include<stdlib.h> 

// Defining the structure for a node in the singly linked list
typedef struct sll 
{ 
    char name[20];  // Student name
    char usn[10];   // University Serial Number
    char phone[12]; // Phone number
    char pgm[5];    // Program (e.g., B.Tech, M.Tech)
    int sem;        // Semester
    struct sll *next;     // Pointer to the next node in the linked list
}*node; 

node first, temp, ptr; // Global pointers for the first node, temporary node, and traversal pointer

// Function to create a new node
void create_node() 
{ 
    temp = (node)malloc(sizeof(struct sll)); // Allocate memory for the new node
    printf("\nEnter the [USN, Name, Program, Semester, Phone number]: ");
    scanf("%s %s %s %d %s", temp->usn, temp->name, temp->pgm, &temp->sem, temp->phone);
    temp->next = NULL; // Set the next pointer of the new node to NULL
} 

// Function to create a linked list of N students by front insertion
void create_list(int n) 
{ 
    for(int i = 0; i < n; i++) 
    { 
       create_node(); // Create a new node
       if(first != NULL) // If the list is not empty
           temp->next = first; // Connect the new node to the list
        first = temp; // Update the first pointer to the new node
    } 
} 

// Function to print the linked list
void print_list() 
{ 
    printf("\nLinked List Status:\n");
    for(ptr = first; ptr != NULL; ptr = ptr->next) 
        printf("%s %s %s %d %s->\n", ptr->usn, ptr->name, ptr->pgm, ptr->sem, ptr->phone);
    printf("NULL\n"); // Print NULL to indicate the end of the list
} 

// Function to insert a node at the front of the linked list (Demonstration of stack)
void insert_front() 
{ 
    create_node(); // Create a new node
    if(first) // If the list is not empty
        temp->next = first; // Connect the new node to the list
    first = temp; // Update the first pointer to the new node
} 

// Function to insert a node at the end of the linked list
void insert_last() 
{ 
    create_node(); // Create a new node
    ptr = first; // Initialize traversal pointer to the first node
    while(ptr->next != NULL) // Traverse until the last node
    { 
        ptr = ptr->next; // Move to the next node
    } 
    ptr->next = temp; // Connect the new node to the last node
} 

// Function to delete the node at the front of the linked list

void delete_front() 
{ 
    temp = first; // Set temporary node to the first node
    first = first->next; // Update the first pointer to the next node
    free(temp); // Free the memory of the deleted node
} 

// Function to delete the node at the end of the linked list
void delete_last() 
{ 
    node prev; // Pointer to the previous node
    ptr = first; // Initialize traversal pointer to the first node
    while(ptr->next != NULL) // Traverse until the second last node
    { 
        prev = ptr; // Save the current node as previous
        ptr = ptr->next; // Move to the next node
    } 
    temp = ptr; // Set temporary node to the last node
    prev->next = NULL; // Update the next pointer of the second last node to NULL
    free(temp); // Free the memory of the deleted node
} 

int main() 
{ 
    int choice; // Variable to store user's choice
    first = NULL; // Initialize the first pointer to NULL

    while(1) // Infinite loop for menu-driven program
    { 
        // Displaying the menu options
        printf("\n---------Menu----------------------------"); 
        printf("\n1. Create List\n2. Insert Front\n3. Delete Front\n4. Insert Last\n5. Delete Last\n6. Display\n7. Exit"); 
        printf("\nEnter your choice: "); 
        scanf("%d", &choice); // Accepting user's choice
        
        switch(choice) // Switch case based on user's choice
        { 
            case 1: 
                create_list(2); // Create a list of 2 students (can be modified)
                break; 
            case 2: 
                insert_front(); // Insert a node at the front of the list
                break; 
            case 3: 
                delete_front(); // Delete a node from the front of the list
                break; 
            case 4: 
                insert_last(); // Insert a node at the end of the list
                break; 
            case 5: 
                delete_last(); // Delete a node from the end of the list
                break; 
            case 6: 
                print_list(); // Print the status of the linked list
                break; 
            case 7: 
                return 0; // Exit the program
            default: 
                printf("\nInvalid choice! Please enter a valid option."); 
        } 
    } 
    return 0; 
} 

 










// #include<stdio.h>
// #include<stdlib.h>

// typedef struct sll
// {
//     char name[20];
//     char usn[20];
//     char program[50];
//     char sem[2];
//     char phone[10];
//     struct sll *next;
// }node;

// node *first,*p,*temp,*prev;
// int count=0;

// void create_node()
// {
//     temp=(node)malloc(sizeof(struct node));
//     printf("\n Enter name \n Enter usn \n Enter program \n Enter sem \n Enter phone number");
//     scanf("%s %s %s %s %s",temp->name, temp->usn, temp->program,temp->sem,temp->phone);
//     temp->next=NULL;
//     count++;
// }

// void create_list(int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         create_node();
//         if(first!=NULL);
//             temp->next=first;
//         first=temp;
//     }
// }

// void print_list()
// {
//     for(p=first;p!=NULL;p=p->next)
//     {
//         printf("%s %s %s %s %s %s",p->name,p->usn,p->program,p->sem,p->phone);
//     }
// }

// void insert_front()
// {
//     create_node();
//     if(first!=NULL)
//     temp->next=first;
//     first=temp;
// }

// void insert_last()
// {
//     create_node();
//     p=first;
//     while(p->next!=NULL)
//     {
//         p=p->next;
//     }
//     p->next=temp;
// }

// void delete_front()
// {
//    temp=first;
//    first=first->next;
//    free(temp);
// }

// void delete_last()
// {
//     p=first;
//     while(p->next!=NULL)
//     {
//         prev=p;
//         p=p->next;
//     }
//     temp=p;
//     prev->next=NULL;
//     free(temp);
// }

// //main
// int main()
// {
//      int n;
//     int choice;
//     while(1)
//     {
//             printf("\n1.Create List\n 2.Insert Front\n 3.Delete Front\n 4. Insert Last \n 5. Delete Last\n 6. Display \n7.Exit"); 
//             printf("\nEnter your choice:\t"); 
//             scanf("%d",&choice); 
//             switch(choice) 
//             {
//                 case 1: 
//                     printf("\n enter the no of list to be entered");
//                     scanf("%d",&n);
//                     for(int i=0;i<n;i++){
//                             create_list(i);
//                     }
//                     break;
                
//                 case 2: 
//                   insert_front();
//                   break;

//                 case 3: 
//                   insert_last();
//                   break;

//                 case 4: 
//                     delete_front();
//                     break;
//                 case 5: 
//                     delete_last();
//                     break;
                
//                 case 6: 
//                     print_list();
//                     break;
                
//                 case 7: 
//                     exit(0);
//                     break;
//                 default: 
//                     printf("\n Enter the valid choice");
//                     break;
//             }
//     }
// }


