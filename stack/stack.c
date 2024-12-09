#include<stdio.h>
#include <ctype.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int pointer =-1;
void push(int value){
    if(pointer>MAX-1){
        printf("Stack is full\n");
        return;
    }
    else{
        stack[pointer+1]=value;
        pointer++;
      //return;
    }
}
int pop(void){
    if(pointer<0){
        printf("\nThe Stack is Empty.\n");
        return 0;
    }
    else{
        int throw=stack[pointer];
        pointer--;
        return throw;
    printf("\n");
    }
}
void showStack(void){
    for(int i=0;i<MAX;i++){
        printf("%d\t",stack[i]);
    }
    printf("\n");
}
int takeInput(void){
    printf("\nEnter the Number:\t");
        int input;
        scanf("%d",&input);
    return input;
}
void stop(void){
    exit(0);
}
int main(void){
    push(10);
    showStack();
  //printf("%d\t",pop());
    showStack();
    while(106){
        printf("\nDo you wanna input something else in stack ?(y/no)\t");
        char choose;
        scanf("%s",&choose);
        if(choose=='y'){
            int input = takeInput();
            push(input);
            showStack();
        }
        printf("\nDo you wanna pop in stack ?(y/no)\t");
            scanf("%s",&choose);
            if(choose=='y'){
                pop();
                showStack();
            }
        printf("If You wanna exit loop press 'e' :>");  
        if(choose=='e'){
            stop();
        }
            
    }
}
