#include <stdio.h>
#include <stdlib.h>
void topologicalSort(int n, int a[][10])
{
    int indegree[10] = {0};
    int sol[10];
    int stk[10];
    int top = -1;
    int k = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            indegree[i] += a[j][i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
        {
            stk[++top] = i;
        }
    }
    while (top != -1)
    {
        int v = stk[top--];
        sol[++k] = v;
        for (int j = 0; j < n; j++)
        {
            if (a[v][j] == 1)
            {
                indegree[j]--;

                if (indegree[j] == 0)
                {
                    stk[++top] = j;
                }
            }
        }
    }
    printf("Topological sorting order: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", sol[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    int a[10][10];
    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    topologicalSort(n, a);
    return 0;
}