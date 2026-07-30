#include <stdio.h>

// Binary Search to find insertion position
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low;
}

int main() {
    int nums[] = {5, 2, 6, 1};
    int n = sizeof(nums) / sizeof(nums[0]);

    int sorted[n];
    int count[n];
    int size = 0;

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {

        // Find insertion position
        int pos = binarySearch(sorted, size, nums[i]);

        // Position = count of smaller elements
        count[i] = pos;

        // Shift elements to make space
        for (int j = size; j > pos; j--) {
            sorted[j] = sorted[j - 1];
        }

        // Insert element
        sorted[pos] = nums[i];
        size++;
    }

    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", count[i]);
    }

    return 0;
}