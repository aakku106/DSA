#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head,*second,*third,*fourth;

void show(struct Node *pointer);

int main(void){

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    head->data= 1;
    second->data=2;
    third->data=3;
    fourth->data=4;
    fourth->next=NULL;


    head->next=second;
    second->next=third;
    third->next=fourth;


    show(head);
    return 0;
}


void show(struct Node *pointer){
    printf("|\tDATA\t|\t\tADDRESS\t|\n\n");
    while(pointer!=NULL){
        printf("|\t%d\t|",pointer->data);
        printf("|\t%d\t|",pointer->next);
        printf("\n\n");
        pointer=pointer->next;
    }
}
