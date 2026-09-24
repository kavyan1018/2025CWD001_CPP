#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

int main()
{

    struct Node *head, *second, *third;

    // create a Node

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // store the data
    head->data = 10;
    second->data = 20;
    third->data = 30;

    // connect the nodes
    head->next = second;
    second->next = third;
    third->next = head;

    // prev links
    head->prev = third;
    second->prev = head;
    third->prev = second;

    // Display
    struct Node *temp = head;

    printf("\nForward : ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);

    temp = head->prev;

    printf("\nBackward : ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    } while (temp != head->prev);

    return 0;
}