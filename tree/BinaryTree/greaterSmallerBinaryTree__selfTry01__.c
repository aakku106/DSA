#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *right;
	struct Node *left;
} *head;
struct Node *createNode(int);
void insertNode(struct Node **head,int);
void showAllNodes(struct Node *head);

int main(void){
	head=NULL;
	insertNode(&head,100);
	insertNode(&head,200);
	insertNode(&head,10);
	insertNode(&head,150);
	insertNode(&head,50);
	insertNode(&head,600);
	insertNode(&head,3);
	showAllNodes(head);
	return 0;
}

struct Node *createNode(int value){
	struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
	newNode->data=value;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

void insertNode(struct Node **head,int data){
	if(*head==NULL)
		*head=createNode(data);//Yedi head Khalli xa Bhanni tai data rakhni
	else if(data<(*head)->data)
		insertNode(&(*head)->left,data);//Yedi head ko data ko value is greater then new aako value, than head ko left is head now
	else if(data>(*head)->data)
		insertNode(&(*head)->right,data);//Ydei head head to data ko value is smaller than aako value, than head is head ko right.
}

void showAllNodes(struct Node *head){
	printf("\n___________________________________________________\n");
	if(head!=NULL){
		printf("\n\t%d\t%p\t%p\n",head->data,head->left,head->right);
		showAllNodes(head->left);
		showAllNodes(head->right);
	}
}
