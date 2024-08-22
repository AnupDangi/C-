#include <stdio.h>
#define INF 9999
#define MAX_V 100
void dijkstra(int graph[MAX_V][MAX_V], int V, int src)
{
    int visited[MAX_V];
    int dist[MAX_V];

    int u;

    for (int i = 0; i < V; i++)
    {
        visited[i] = 0;
        dist[i] = INF;
    }
    dist[src] = 0;
    for (int i = 0; i < V - 1; i++)
    {
        int min = INF;
        for (int j = 0; j < V; j++)
        {
            if (!visited[j] && dist[j] < min)
            {
                min = dist[j];
                u = j;
            }
        }
        visited[u] = 1;
        for (int j = 0; j < V; j++)
        {

            if (!visited[j] && graph[u][j] && dist[u] != INF)
            {

                if (dist[u] + graph[u][j] < dist[j])
                {

                    dist[j] = dist[u] + graph[u][j];
                }
            }
        }
    }
    printf("Vertex Distance from Source\n");
    for (int i = 0; i < V; i++)
    {
        printf("%d to %d :\t\t %d\n", src, i, dist[i]);
    }
}
int main()
{
    int V;
    printf("Enter the number of vertices: ");
    scanf("%d", &V);
    if (V > MAX_V)
    {
        printf("Number of vertices exceeds maximum allowed (%d).\n", MAX_V);
        return 1;
    }
    int graph[MAX_V][MAX_V];
    printf("Enter the adjacency matrix (%d x %d):\n", V, V);
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            scanf("%d", &graph[i][j]);
            if (graph[i][j] == 0 && i != j)
            {
                graph[i][j] = INF;
            }
        }
    }
    int src;
    printf("Enter the source vertex: ");
    scanf("%d", &src);
    dijkstra(graph, V, src);
    return 0;
}