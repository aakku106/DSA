#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head,*sec,*thi,*end;
void show(struct Node *pointer);
void insertAtLast();

int main(void){
    head=(struct Node *)malloc(sizeof(struct Node));
    sec=(struct Node *)malloc(sizeof(struct Node));
    thi=(struct Node *)malloc(sizeof(struct Node));
    end=(struct Node *)malloc(sizeof(struct Node));

    head->data=1;
    head->next=sec;
    sec->data=2;
    sec->next=thi;
    thi->data=3;
    thi->next=end;
    end->data=4;
    end->next=NULL;

    show(head);
    insertAtLast();
    show(head);
    return 0;
}

void show(struct Node *pointer){
    while(pointer){
        printf("|\t%d\t|\t%d\t\n|",pointer->data,pointer->next);
        pointer=pointer->next;
        printf("%d\n",&pointer->data);
    }
    printf("\n\n");
}

void insertAtLast(){
    struct Node *pointer=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;


    while(p->next!=NULL){
        p=p->next; 
    }
    p->next=pointer;
    pointer->data=106;
    pointer->next=NULL;
}

