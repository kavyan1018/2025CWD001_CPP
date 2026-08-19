#include<stdio.h>
#include<stdlib.h>


struct Node{

    int data;
    struct Node *next;
};

int main(){

    struct Node *head = NULL;
    struct Node *newNode;
    struct Node *temp;

    int i, n;

    // take input from user


    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        // New node allocation
        newNode = (struct Node*) malloc(sizeof(struct Node));

        printf("Enter data for node %d: ", i);
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        // first node
        if(head == NULL)
        {
            head = newNode;
        } 
        else{

            temp = head;

            // traverse to the last node
            while(temp->next != NULL){
                temp = temp->next;
            }

            // connect the new node
            temp->next = newNode;
        }
    }

    // display the linked list

    printf("The linked list is: ");

    temp = head;
 
    while(temp != NULL){

        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL \n");
}