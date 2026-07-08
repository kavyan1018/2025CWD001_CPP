#include <stdio.h>

int main()
{

    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;

    // bubble sort

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted Array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}