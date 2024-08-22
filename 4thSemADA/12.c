#include <stdio.h>
#define SIZE 7
void displaySubset(int subSet[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", subSet[i]);
    }
    printf("\n");
}
void subsetSum(int set[], int n, int sum, int subSet[], int subSize, int subtotal, int start)
{
    if (subtotal == sum)
    {
        displaySubset(subSet, subSize)
        return;
    }
    for (int i = start; i < n; i++)
    {
        if (subtotal + set[i] <= sum)
        {
            subSet[subSize] = set[i];
            subsetSum(set, n, sum, subSet, subSize + 1, subtotal + set[i], i + 1);
        }
    }
}
void findSubset(int set[], int size, int sum)
{
    int subSet[size];
    subsetSum(set, size, sum, subSet, 0, 0, 0);
}
int main()
{
    int weights[] = {1, 9, 7, 5, 18, 12, 20};
    int size = sizeof(weights) / sizeof(weights[0]);
    int targetSum = 35;
    printf("Subsets with sum %d are:\n", targetSum);
    findSubset(weights, size, targetSum);
    return 0;
}