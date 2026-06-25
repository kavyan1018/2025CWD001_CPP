#include<stdio.h>
int binarySearch(int arr[], int size, int key){

    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }else if(key < arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){

    int arr[] = {10,20,30,40,50,60,70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;


    printf("\n Enter the Elements to search :");
    scanf("%d", &key);


    int res = binarySearch(arr, size, key);

    if(res != -1){

        printf("Element found at index : %d", res);
    }
    else{
        printf("Element not Found !");
    }
}