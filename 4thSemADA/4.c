#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int knapsackDP(int n, int m, int proft[], int wt[])
{
    int v[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                v[i][j] = 0;
            }
            else if (wt[i - 1] > j)
            {
                v[i][j] = v[i - 1][j];
            }
            else
            {
                v[i][j] = max(v[i - 1][j], v[i - 1][j - wt[i - 1]] + proft[i -
                                                                           1]);
            }
        }
    }
    return v[n][m];
}
int main()
{
    int n = 4;
    int m = 5;
    int proft[] = {12, 10, 20, 15};
    int wt[] = {2, 1, 3, 2};
    printf("The maximum profit is: %d\n", knapsackDP(n, m, proft, wt));
    return 0;
}