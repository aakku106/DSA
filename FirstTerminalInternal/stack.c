#include<stdio.h>
#define MAX 10
int stack[MAX];
int pointer=-1;
int pop(void);
void push(int);
int main(void){
    push(10);
    push(20);
    pop();
    printf("\nPop item is %d\t",pop());
    printf("\nPop item is %d\t",pop());

    return 0;
}
void push(int value){
    if(pointer==MAX-1)
        printf("\nStack is full\n");
    else
        stack[++pointer]=value;
}
int pop(void){
    if(pointer<0)
        printf("\nstack is empty\n");
    else
        return stack[pointer--];
    return 0;
}