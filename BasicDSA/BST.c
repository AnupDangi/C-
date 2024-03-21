#include<stdio.h>
#include<stdlib.h>

struct bst{
    int data;
    struct bst *lchild;
    struct bst *rchild;
};

typedef struct bst *Node;

Node create()
{
    Node temp;
    temp=(Node) malloc(sizeof (struct BST));
    printf("\nEnter the value");
    scanf("%d",&temp->data);
    temp->lchild=NULL;
    temp->rchild=NULL;
    return temp;
}

void insert(Node root, Node newnode);
void preorder(Node root);
void inorder(Node root);
void postorder(Node root);
void search(Node root);

void insert(Node root,Node newnode)
{
    if(root==NULL)
    {
        printf("\n BST is empty");
        return;
    }
    if(newnode->data<root->data)
    {
        if(root->lchild==NULL)
        {
            root->lchild=newnode;
        }
        else{
            insert(root->lchild,newnode);
        }
    }
    else if(newnode->data>root->data)
    {
        if(root->rchild==NULL)
        {
            root->rchild=newnode;
        }
        else{
            insert(root->rchild,newnode);
        }
    }
}

void search(Node root)
{
    Node cur;
    int key;
    if(root==NULL)
    {
        printf("BST is empty ");
        return;
    }
    else{
        printf("\nEnter the key");
        scanf("%d",&key);
        cur=root;
        while(cur!=NULL){
        if(key==cur->data)
        {
            printf("Key is found in BST");
        }
        if(key<cur->data)
        {
            cur=cur->rchild;
        }
        else{
            cur=cur->rchild;
        }
        }
        printf("\n Key element %d is not found in bst");
    }
}

void preorder(Node root)
{
    if (root!=NULL)
    {
    printf("%d",root->data);
    preorder(root->lchild);
    preorder(root->rchild);
}
}
void inorder(Node root)
{
    if(root!=NULL){
    inorder(root->lchild);
    printf("%d",root->data);
    inorder(root->rchild);
}
}
void postorder(Node root)
{
    if(root!=NULL)
    {
    postorder(root->lchild);
    postorder(root->rchild);
    printf("%d",root->data);
}
}


int main(){
    int choice,key,i,n;
    Node root=NULL,newnode;
    while(1)
    {
        printf("\n BST MENU");
        printf("\n 1.Create a BST");
        printf("\n 2. BST Traversal");
        printf("\n 3.Searching a key ");
        printf("\n 4.Exit");

        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
            printf("\n Enter the number of nodes:");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                newnode=create();
                if(root==NULL){
                    root=newnode;
                }
                else
                {
                    insert(root,newnode);
                }
            }
            break;

            case 2: 
            printf("\n BST Traversal");
            if(root==NULL){
                printf("\n Tree is not created");
            }
            else{
                printf("\n The preorder display is");
                preorder(root);
                printf(":\n The postorder display is ");
                postorder(root);
                printf("\n The inorder display is");
                inorder(root);
            }
            break;
             case 3:
                search(root);
            break;

        case 4: 
            exit(0);
            break;
            default:
            printf("\n Please enter the valid case");
            break;
    }
}
    return 0;
}
