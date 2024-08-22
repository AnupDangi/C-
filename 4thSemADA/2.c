#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void merge(int arr[], int low, int mid, int high);
void merge_sort(int arr[], int low, int high);
int main()
{
    int n, low, high;
    clock_t start, end;
    double time_taken;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    low = 0;
    high = n - 1;
    int arr[n];
    printf("Original array:\n");
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000;
        printf("%d ", arr[i]);
    }
    printf("\n");
    start = clock();
    merge_sort(arr, low, high);
    end = clock();
    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    time_taken = (double)(end - start) / (double)(CLOCKS_PER_SEC);
    printf("The taken taken in seconds is %lf:", time_taken);
    return 0;
}
void merge_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int c[high + 1];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            c[k++] = arr[i++];
        }
        else
        {
            c[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        c[k++] = arr[i++];
    }
    while (j <= high)
    {
        c[k++] = arr[j++];
    }
    for (i = low; i <= high; i++)
    {
        arr[i] = c[i];
    }
}