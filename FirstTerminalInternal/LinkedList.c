#include<stdio.h>
#include<stdlib.h>
typedef struct NODE{
    int data;
    struct NODE *next;
}NODE;
NODE *head,*second,*third,*last;


void insertAtBeginning(NODE *pointer,int);
void insertAtEnd(int);
void insertAfter();
void insertBefore();
void insertIn();

void deleteAtBeginning();
void deleteAtEnd();
void deleteAfter();
void deleteBefore();
void deleteIn();

void show(NODE *pointer);

int main(void){

    head=(NODE *)malloc(sizeof(NODE));
    second=(NODE *)malloc(sizeof(NODE));
    third=(NODE *)malloc(sizeof(NODE));
    last=(NODE *)malloc(sizeof(NODE));

    head->data=01;
    second->data=02;
    third->data=03;
    last->data=04;

    head->next=second;
    second->next=third;
    third->next=last;
    last->next=NULL;

    show(head);
    insertAtBeginning(head,106);
    show(head);




    return 0;
}

void show(NODE *pointer){
    printf("\n_________________________________________\n\n|\tDATA\t|\tNextAddress\t|\n_________________________________________\n");
    while(pointer){
        printf("\n|\t%d\t|\t%p\t|\n",pointer->data,pointer->next);
        pointer=pointer->next;
    }
    printf("\n_________________________________________\n");
}

void insertAtBeginning(NODE *pointer,int data){
    NODE *p=(NODE *)malloc(sizeof(NODE));
    p->data=data;
    p->next=head;
    head=p;
}

// void insertAtEnd(int){

// }