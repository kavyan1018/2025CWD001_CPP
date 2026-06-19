#include<stdio.h>
#include<conio.h>

void main(){

    int arr[100], n, i, found = 0, key;

    printf("\n Enter the Number of Elements :");
    scanf("%d", &n);
    

    // array input
    printf("\n Enter the %d Elements in array :", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // usear input and search ele 

    printf("Enter the Number u want to search : ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if(arr[i] == key){
            found = 1;
            break;
        }        
    }
    
    if (found == 1)
    {
        printf("\n The %d Element is Found at %d.", key, i);
    }
    else{
        printf("\n The %d Element Not Found ", key);
    }
    
}