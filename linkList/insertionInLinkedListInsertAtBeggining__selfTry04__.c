#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head,*sec,*third,*last;

void show(struct Node *pointer);
struct Node * insertAtBeginning();

int main(void){
    head=(struct Node *)malloc(sizeof(struct Node));
    sec=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    last=(struct Node *)malloc(sizeof(struct Node));
    
    head->data=1;
    head->next=sec;
    sec->data=2;
    sec->next=third;
    third->data=3;
    third->next=last;
    last->data=4;
    last->next=NULL;

    show(head);
    insertAtBeginning();
    show(head);
    return 0;
}

void show(struct Node *pointer){
    while(pointer!=NULL){
        printf("\t%d\t%d\n",pointer->data,pointer->next);
        printf("\n\n");
        pointer=pointer->next;
        printf("%d\n",&pointer->data); // this shows the address of int data pointed by previous node(next).
    }
        printf("\n\n");
        printf("\n\n");

}

struct Node * insertAtBeginning(){
   struct Node *pointer=(struct Node *)malloc(sizeof(struct Node));
    pointer->data=106;
    pointer->next=head;
    head=pointer;
    return head;
}

    
