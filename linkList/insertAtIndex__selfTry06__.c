#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head,*sec,*last;
void show(struct Node *pointer);
void insertAtGivenIndex(int);
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
    insertAtGivenIndex(1);
    show(head);

}

void show(struct Node *pointer){
    while(pointer){
        printf("|\t%d\t||\t%p\t|\n",pointer->data,pointer->next);
        pointer=pointer->next;
    }
    printf("\n\n");
}

void insertAtGivenIndex(int index){
    struct Node *pointer,*p;
    pointer=(struct Node *)malloc(sizeof(struct Node));
    p=head;// purano head ly xopera naya p banako
    int i=0;
    while(i!=index-1){
        p=p->next;//yedi 1 bhanda thullo num xa bhanni, tyo node bhanda agillo rode ma rukkinxa
        i++;
    }
    pointer->data=106;
    pointer->next=p->next;// naya node next ly purana node ko next sanga jodako.
    p->next=pointer;// purana node ko next naya node banako.

}

