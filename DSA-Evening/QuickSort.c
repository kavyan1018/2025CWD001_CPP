#include <stdio.h>

void QuickSort(int arr[], int low, int high)
{

    if (low >= high)
    {
        return;
    }

    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {

            i++;

            // swap
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // pivot in correct positions put

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    int p = i + 1;

    // left side arr
    QuickSort(arr, low, p - 1);

    // Right side arr
    QuickSort(arr, p + 1, high);
}

int main()
{

    int arr[] = {20, 2, 9, 7, 12, 15, 1, 6, 8};
    int n = 9;

    printf("\n Before Sorting :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    QuickSort(arr, 0, n - 1);

    printf("\n After Sorting :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}