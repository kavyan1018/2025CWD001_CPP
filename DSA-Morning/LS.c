#include<stdio.h>
#include<conio.h> 

int main(){

    int arr[100], n, key, i, found = 0;

    printf("Enter Number of elements :");
    scanf("%d", &n);

    printf("Enter the Araay Elements : \n");
    for (i = 0; i < n; i++)
    {   
        scanf("%d", &arr[i]);
    }
    
    printf("\n Enter the element to Search : ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {   
     
        if(arr[i] == key){

            printf("\n Element found at Position %d", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nElement not Found !");
    }
    
}