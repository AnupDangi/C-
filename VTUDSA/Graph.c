#include<stdio.h>
#include<stdlib.h>
#define size 20

//bfs traversal adjacent matrix 
void bfs(int amat[size][size],int visited[],int src,int n)
{
    int Queue[size],i;
    int front=-1,rear=-1,curVertex;
    visited[src]=1;
    rear=rear+1;
    Queue[rear]=src;

    while(front!=rear)
    {
        front=front+1;
        curVertex=Queue[front];
        printf("%d",curVertex);

        for(int i=0;i<n;i++)
        {
            if(amat[curVertex][i]==1&&visited[i]==0)
            {
                rear=rear+1;
                Queue[rear]=i;
                visited[i]=1;
            }
        }
    }
}

void dfs(int amat[size][size],int visited[],int src,int n)
{
    int i;
    visited[src]=1;
    printf("%d",src);
    for(i=0;i<n;i++)
    {
        if(amat[src][i]==1&&visited[i]==0)
        {
            dfs(amat,visited,i,n);
        }
    }

}
int main()
{
    int amat[size][size],curVertex,n,i,j;
    int visited[size],src;

        printf("\nEnter the number of cities");
        scanf("%d",&n);

        printf("\nEnter the adjacency matrix:\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&amat[i][j]);
            }
        }
    printf("\nEnter the source for traversal");
    scanf("%d",&src);

    printf("\nBFS traversal");
    for(i=0;i<n;i++)
    {
        visited[i]=0;
    }
    bfs(amat,visited,src,n);
    
    printf("\nDFS traversal");
    for(i=0;i<n;i++)
    {
        visited[i]=0;
    }
    dfs(amat,visited,src,n);

    printf("\n");
    return 0;
}