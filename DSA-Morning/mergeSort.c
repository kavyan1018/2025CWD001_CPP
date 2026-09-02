#include <stdio.h>

int merge(int arr[], int min, int mid, int max)
{

    int i = min;
    int j = mid + 1;
    int k = 0;

    int temp[100];

    // both side
    while (i <= mid && j <= max)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    // Remainig ele Left side
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Remainig ele Right side
    while (j <= max)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // copy to original array
    for (i = min, k = 0; i <= max; i++, k++)
    {
        arr[i] = temp[k];
    }
}

int mergeSort(int arr[], int min, int max)
{

    if (min < max)
    {

        int mid = (min + max) / 2;

        // Divide Left Part
        mergeSort(arr, min, mid);

        // Divide Right Part
        mergeSort(arr, mid + 1, max);
        
        // Merge
        merge(arr, min, mid, max);

    }
}

int main()
{

    int arr[] = {8, 3, 5, 4, 7, 6, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("\n Before Sorthing");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    mergeSort(arr, 0, n - 1);

    printf("\n After Sorthing");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}