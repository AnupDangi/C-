#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pidx = partition(arr, low, high);
        quickSort(arr, low, pidx - 1);
        quickSort(arr, pidx + 1, high);
    }
}
void printArray(int arr[], int n)
{
    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main()
{
    clock_t start, end;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Array elements before sorting:\n");
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 24;
        printf("%d\t", arr[i]);
    }
    printf("\n");
    start = clock();
    quickSort(arr, 0, n - 1);
    end = clock();
    printArray(arr, n);
    double total_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken for sorting: %lf seconds\n", total_time);
    return 0;
}