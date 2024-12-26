#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

void insertIntoBegining(int data)
{
    struct Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = head;
    head = node;
}
void insertIntoLast(int data)
{

    struct Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;

    if (head == NULL)
    {
        head = node;
    }
    else
    {
        Node *next = head;
        while (next->next != NULL)
        {
            next = next->next;
        }
        next->next = next;
    }
}

void printList()
{
    Node *next = head;
    while (next != NULL)
    {
        printf("%d\t", *next);
        next = next->next;
    }
    printf("\n");
}
int main()
{
    printList();
    insertIntoBegining(10);
    printList();
    insertIntoBegining(6);
    printList();
    insertIntoBegining(12);
    printList();

    insertIntoLast(106);
    printList();

    return 0;
}