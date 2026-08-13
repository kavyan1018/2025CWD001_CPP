#include <stdio.h>

void merge(int a[], int low, int mid, int high)
{

    int i = low;
    int j = mid + 1;
    int k = 0;

    int temp[100];

    // compare and store temp

    while (i <= mid && j <= high)
    {

        if (a[i] < a[j])
        {

            temp[k] = a[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = a[j];
            j++;
            k++;
        }
    }

    // left half

    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    // right half
        while (j <= high)
    {
        temp[k] = a[j];
        j++;
        k++;
    }


    // copy temp to original array
    for(i = low, k = 0; i <= high; i++, k++)
    {
        a[i] = temp[k];
    }

}

void mergesort(int a[], int low, int high)
{

    if (low < high)
    {
        int mid = (low + high) / 2;

        // left half
        mergesort(a, low, mid);
        
        // right half
        mergesort(a, mid + 1, high);

        // merge the two halves
        merge(a, low, mid, high);
    }
}

int main()
{

    int a[] = {12, 31, 35, 8, 32, 17};
    int n = 6;

    mergesort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}