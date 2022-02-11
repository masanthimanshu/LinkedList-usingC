#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printList(struct Node *n)
{
    printf("\nOutput of the List \n");
    while (n != NULL)
    {
        printf("%d", n->data);
        n = n->next;

        printf("\n");
    }
}

void addNode(struct Node *n)
{
    int num;
    struct Node *new = NULL;
    new = malloc(sizeof(struct Node));

    printf("Enter Your Number \n");
    scanf("%d", &num);

    new->data = num;
    new->next = NULL;

    while (n->next != NULL)
    {
        n = n->next;
    }

    n->next = new;
}

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    addNode(head);

    printList(head);

    return 0;
}