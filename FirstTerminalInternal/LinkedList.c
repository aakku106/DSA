#include<stdio.h>
#include<stdlib.h>
typedef struct NODE{
    int data;
    struct NODE *next;
}NODE;
NODE *head,*second,*third,*fourth;


void insertAtBeginning(NODE *pointer,int);
void insertAtEnd(NODE *p,int);
void insertAfter(NODE *p,int,int);
void insertBefore(NODE *p,int,int);
void insertIn(NODE *p,int,int);
void insertNodeIn(NODE *p,int,int);

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
    fourth=(NODE *)malloc(sizeof(NODE));

    head->data=01;
    second->data=02;
    third->data=03;
    fourth->data=04;

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    show(head);
    insertAtBeginning(head,106);// makes new head NODE.
    show(head);
    insertAtEnd(head,106);// add new NODE at last of linked list.
    show(head);
    insertAfter(head,100,1);// Insert Node after given node index.
    show(head);
    insertBefore(head,101,4);// Insert Node Before given NODE index.
    show(head);
    insertIn(head,123,6);//Erases old value and puts new value of data.
    show(head);
    insertNodeIn(head,11111,6);
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
    pointer->data=data;
    pointer->next=NULL;
    if(head==NULL){
        head=pointer;
        return;
    }
    while(p->next!=NULL)
        p=p->next;
    p->next=pointer;
}
void insertAfter(NODE *p,int data,int insertAfter){
    int i=0;
    NODE *pointer=(NODE *)malloc(sizeof(NODE));
    while(i!=insertAfter){
        p=p->next;i++;
    }
    if(p==NULL) return;
    pointer->next=p->next;
    p->next=pointer;
    pointer->data=data;
}
void insertBefore(NODE *p,int data,int insertBefore){
    if(insertBefore==0){
        insertAtBeginning(head,data);
    }
    NODE *pointer=(NODE *)malloc(sizeof(NODE));
    int i = 0;
    while(i!=insertBefore-1){
        p=p->next;i++;
    }
    if(p==NULL||p->next==NULL) return;
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
    if(p==NULL) return;
    p->data=data;
}
void insertNodeIn(NODE *p,int data,int insertNodeIn){
    NODE *pointer=(NODE *)malloc(sizeof(NODE));
    int i=0;
    while(i!=insertNodeIn-1){
        i++;
        p=p->next;
    }
    if(p==NULL) return;
    pointer->next=p->next;
    p->next=pointer;
    pointer->data=data;
}