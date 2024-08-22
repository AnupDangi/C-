#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define INF 999

int parent[MAX];

int edges_u[MAX];
int edges_v[MAX];
int edges_w[MAX];

int find(int i)
{
    while (parent[i])
        i = parent[i];
    return i;
}
int uni(int i, int j)
{
    if (i != j)
    {
        parent[j] = i;
        return 1;
    }
    return 0;
}
void kruskal(int n, int e)
{

    for (int i = 0; i < e - 1; i++)
    {
        for (int j = i + 1; j < e; j++)
        {
            if (edges_w[i] > edges_w[j])
            {

                int temp = edges_u[i];
                edges_u[i] = edges_u[j];
                edges_u[j] = temp;

                temp = edges_v[i];
                edges_v[i] = edges_v[j];
                edges_v[j] = temp;

                temp = edges_w[i];
                edges_w[i] = edges_w[j];
                edges_w[j] = temp;
            }
        }
    }
    int u, v;
    int mincost = 0;
    printf("Minimum Cost Spanning Tree:\n");
    for (int i = 0; i < e; i++)
    {
        u = find(edges_u[i]);
        v = find(edges_v[i]);
        if (uni(u, v))
        {
            printf("Edge: (%d -> %d), Cost: %d\n", edges_u[i], edges_v[i], edges_w[i]);
            mincost += edges_w[i];
        }
    }
    printf("Cost of spanning tree is: %d\n", mincost);
}
int main()
{
    int n, e;
    int u, v, w;
    printf("Enter No. of Nodes: ");
    scanf("%d", &n);
    printf("Enter No. of Edges: ");
    scanf("%d", &e);
    printf("Enter the Edges (u v w):\n");
    for (int i = 0; i < e; i++)
    {
        scanf("%d %d %d", &u, &v, &w);
        edges_u[i] = u;
        edges_v[i] = v;
        edges_w[i] = w;
    }
    kruskal(n, e);
    return 0;
}