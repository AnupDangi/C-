#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void printArray(int arr[], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[index] > arr[j])
            {
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    clock_t start, end;
    int n;
    printf("Enter the no of elements:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 24;
        printf("%d\t", arr[i]);
    }
    start = clock();
    selectionSort(arr, n);
    end = clock();
    printArray(arr, n);
    double total_time;
    total_time = (double)(end - start) / (double)(CLOCKS_PER_SEC);
    printf("%lf", total_time);
}