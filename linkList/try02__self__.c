#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};






int main(void){

    struct Node *head;
    struct Node *second;
    struct Node *third;

// Heap ma hunxa not in stack cause its dymanic memory allocation.

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

// Linking before and after.
    head->data=106;
    head->next=second;

    second->data=1069;
    second->next=third;

    third->data=16;
    third->next=NULL;

// showing data:
    
    printf("\n%d\n",head->data);
    printf("\n%d\n",second->data);
    printf("\n%d\n",third->data);

// This show a verry simple inplementaion of linked list...



    
    return 0;
}
