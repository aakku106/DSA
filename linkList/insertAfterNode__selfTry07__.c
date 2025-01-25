#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head,*sec,*last;
void show(struct Node *pointer);
void insertAfterNode(struct Node *pointer);
int main(void){
    head=(struct Node *)malloc(sizeof(struct Node));
    sec=(struct Node *)malloc(sizeof(struct Node));
    last=(struct Node *)malloc(sizeof(struct Node));
    head->next=sec;
    sec->next=last;
    last->next=NULL;
    head->data=01;
    sec->data=02;
    last->data=03;

    show(head);
    insertAfterNode(head);// only applicable if the previous node is known and avaible 
    show(head);

}

void show(struct Node *pointer){
    while(pointer){
        printf("|\t%d\t||\t%p\t|\n",pointer->data,pointer->next);
        pointer=pointer->next;
    }
    printf("\n\n");
}

void insertAfterNode(struct Node *preNode){
    struct Node *pointer=(struct Node *)malloc(sizeof(struct Node));
    pointer->data=106;
    pointer->next=preNode->next;
    preNode->next=pointer;
}

