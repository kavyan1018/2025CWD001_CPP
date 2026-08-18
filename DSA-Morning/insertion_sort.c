#include<stdio.h>

int main(){

    int arr[] = {5, 3, 4, 1, 2};
    int n = 5;
    int i , j , key;


    // insertion sort algorithm
    for(i = 1; i < n; i++)
    {
        key = arr[i];

        j = i - 1;   // 1 - 1 = 0

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j]; // arr[0 + 1]   =   arr[0] =  5
            j--;
        }

        arr[j + 1] = key;   // arr[ 0 + 1] = 1
    }

    printf("Sorted array is: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}