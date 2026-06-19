#include<stdio.h>
#include<conio.h>

void main(){


    int arr[100], n, found = 0, i, key;

    printf("Enter the Number of Elements :");
    scanf("%d", &n);

    printf("\n Enter the Elements of Array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d",  &arr[i]);
    }
    
    // search 

    printf("\nEnter the Number u want to search :");
    scanf("%d", &key);


    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("\nThe %d Element Found at %d.", key, i);
    }
    else{
        printf("\n Element Not found !");
    }
}