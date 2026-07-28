#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low;
}

int main()
{
    int nums[] = {5, 2, 6, 1};
    int n = sizeof(nums) / sizeof(nums[0]);

    int sorted[100];
    int result[100];
    int size = 0;

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--)
    { // 4 - 1

        /*
            i = 3 -> 2 -> 1 -> 0
                1 -> 6 -> 2 -> 5
        */

        // Find insertion position
        // stored all contains all elements that are to the right of arr[i]
        // 1 -> pos -> 0
        // res[3] = 0

        // 6 -> pos -> 2
        // res[2] = 1

        // 2 -> pos -> 1
        // res[1] = 1

        // 5 -> pos -> 3
        // res[0] = 2

        int pos = binarySearch(sorted, size, nums[i]);

        // Number of smaller elements
        result[i] = pos;

        // Shift elements to insert
        for (int j = size; j > pos; j--)
            sorted[j] = sorted[j - 1];

        sorted[pos] = nums[i];
        size++;
    }

    printf("Input : ");
    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);

    printf("\nOutput: ");
    for (int i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}
