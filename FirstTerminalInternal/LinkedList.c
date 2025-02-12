#include<stdio.h>
#include<stdlib.h>
typedef struct NODE{
    int data;
    struct NODE *next;
}NODE;
NODE *head,*second,*third,*last;


void insertAtBeginning(NODE *pointer,int);
void insertAtEnd(NODE *p,int);
void insertAfter(NODE *p,int,int);
void insertBefore(NODE *p,int,int);
void insertIn(NODE *p,int,int);

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
    insertAtEnd(head,106);
    show(head);
    insertAfter(head,100,1);
    show(head);
    insertBefore(head,101,4);
    show(head);
    insertIn(head,123,6);//Erases old value and puts new value of data.
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

void insertAtEnd(NODE *p,int data){
    NODE  *pointer = (NODE *)malloc(sizeof(NODE));
    while(p->next!=NULL)
        p=p->next;
    p->next=pointer;
    pointer->data=data;
    pointer->next=NULL;
}
void insertAfter(NODE *p,int data,int insertAfter){
    int i=0;
    NODE *pointer=(NODE *)malloc(sizeof(NODE));
    while(i!=insertAfter){
        p=p->next;i++;
    }
    pointer->next=p->next;
    p->next=pointer;
    pointer->data=data;
}
void insertBefore(NODE *p,int data,int insertBefore){
    NODE *pointer=(NODE *)malloc(sizeof(NODE));
    int i = 0;
    while(i!=insertBefore-1){
        p=p->next;i++;
    }
    pointer->next=p->next;
    p->next=pointer;
    pointer->data=data;
}
void insertIn(NODE *p,int data,int insertIn){
    int i=0;
    while(i!=insertIn){
        p=p->next;
        i++;
    }
    p->data=data;
}