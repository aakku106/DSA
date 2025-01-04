#include <stdio.h>
// #include <ctype.h>
#include <stdlib.h>
#define MAX 10
int stack[MAX];
int pointer = -1;
void push(int value)
{
    if (pointer > MAX - 1)
    {
        printf("Stack is full\n");
        return;
    }
    else
    {
        stack[pointer + 1] = value;
        pointer++;
    }
}
int pop(void)
{
    if (pointer < 0)
    {
        printf("\nThe Stack is Empty.\n");
    }
    else
    {
        int throw = stack[pointer--];
        printf("\n");
        return throw;
    }
    return 0;
}
void showStack(void)
{
    printf("\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d\t", stack[i]);
    }
    printf("\n");
}
int takeInput(void)
{
    printf("\nEnter the Number:\t");
    int input;
    scanf("%d", &input);
    return input;
}
void stop(void)
{
    exit(0);
}
int main(void)
{
    showStack();
    while (106)
    {
        printf("\nDo you wanna input something else in stack ?(y/n)\t");
        char choose;
        scanf("%s", &choose);
        if (choose == 'y')
        {
            push(takeInput());
            showStack();
        }
        printf("\nDo you wanna pop in stack ?(y/n)\t");
        scanf("%s", &choose);
        if (choose == 'y')
        {
            printf("%d", pop());
            showStack();
        }
        else if (choose == 'n')
        {
            showStack();
        }

        printf("If You wanna exit loop press 'e' :>");
        if (choose == 'e')
        {
            stop();
        }
    }
}
