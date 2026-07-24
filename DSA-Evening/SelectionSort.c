#include <stdio.h>
#include <conio.h>

void main()
{

    int arr[5] = {64, 25, 12, 22, 11};
    int i, j, min, temp;

    // Selection Sort Algorithm

    for (i = 0; i < 5; i++)
    {

        min = i;

        for (j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // swap

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted array: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}
