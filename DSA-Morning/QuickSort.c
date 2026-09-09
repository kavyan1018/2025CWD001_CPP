#include <stdio.h>

void QuickSort(int arr[], int low, int high)
{

    if (low < high)
    {

        int pivot = arr[high];
        int i = low - 1; // low - 1  => 0 - 1   -> i = -1
        int j;
        int temp;

        for (j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // put pviot in correct position
        temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;


        int pi = i + 1;

        QuickSort(arr, low, pi - 1);
        QuickSort(arr,pi + 1, high);

    }
}

int main()
{

    int arr[] = {10, 7, 8, 9, 1, 3, 5};
    int n = 7;

    int i;

    printf("Before Sort :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    QuickSort(arr, 0, n - 1);

    printf("\nAfter Sort :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}