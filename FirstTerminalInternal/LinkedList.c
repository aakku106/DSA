#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}Node;
Node *head,*second,*third,*last;


void insertAtBeginning(Node *pointer);
void insertAtEnd();
void insertAfter();
void insertBefore();
void insertIn();

void deleteAtBeginning();
void deleteAtEnd();
void deleteAfter();
void deleteBefore();
void deleteIn();

void show(Node *pointer);

int main(void){

    head=(Node *)malloc(sizeof(Node));
    second=(Node *)malloc(sizeof(Node));
    third=(Node *)malloc(sizeof(Node));
    last=(Node *)malloc(sizeof(Node));

    head->data=01;
    second->data=02;
    third->data=03;
    last->data=04;

    head->next=second;
    second->next=third;
    third->next=last;
    last->next=NULL;

    show(head);


    return 0;
}

void show(Node *pointer){
    printf("\n_________________________________________\n\n|\tDATA\t|\tNextAddress\t|\n_________________________________________\n");
    while(pointer){
        printf("\n|\t%d\t|\t%p\t|\n",pointer->data,pointer->next);
        pointer=pointer->next;
    }
    printf("\n_________________________________________\n");
}

// void insertAtBeginning(Node *pointer){}