#include<stdio.h>

int main(){

    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Insertion Sort Algorithm

    for(int i = 1; i < n; i++){   // i = 1 -> 11

        int key = arr[i];  
        int j = i - 1;    // 1-1 = 0 -> 12

        while(j >= 0 && arr[j] > key){    // 12  > 11   
            arr[j + 1] = arr[j];  // arr[j + 1]  -> 0 + 1 => 12    / arr[j] = 12
            j--;   // j = 0 - 1 => -1
        }
        arr[j + 1] = key;  // arr[-1 + 1] = 0 -> 11
    }

    printf("Sorted array: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}