#include <stdio.h>
#include <stdlib.h>
double knapsack(int weights[], int values[], int n, int W)
{
    double ratios[n];
    int indices[n];
    for (int i = 0; i < n; i++)
    {
        ratios[i] = (double)values[i] / weights[i];
        indices[i] = i;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ratios[j] < ratios[j + 1])
            {
                double tempRatio = ratios[j];
                ratios[j] = ratios[j + 1];
                ratios[j + 1] = tempRatio;
                int tempIndex = indices[j];
                indices[j] = indices[j + 1];
                indices[j + 1] = tempIndex;
            }
        }
    }
    int currentWeight = 0;
    double finalValue = 0.0;
    for (int i = 0; i < n; i++)
    {
        int idx = indices[i];
        if (weights[idx] + currentWeight <= W)
        {
            currentWeight += weights[idx];
            finalValue += values[idx];
        }
        else
        {
            int remain = W - currentWeight;
            finalValue += values[idx] * ((double)remain / weights[idx]);
            break;
        }
    }
    return finalValue;
}
int main()
{
    int values[] = {60, 100, 120};
    int weights[] = {10, 20, 30};
    int n = sizeof(values) / sizeof(values[0]);
    int W = 50;
    printf("Maximum value in Knapsack = %.2f\n", knapsack(weights, values, n, W));
    return 0;
}