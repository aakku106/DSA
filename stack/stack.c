#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 10
int stack[MAX];
int pointer = -1;

void showStack(void)
{
    printf("\n");
    if (pointer == -1)
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("In stack...\n\t\t");
    for (int i = 0; i <= pointer; i++)
    {
        printf("%d\t", stack[i]);
    }
    printf("\n....\n");
}
void push(int value)
{
    if (pointer >= MAX - 1)
    {
        printf("Stack is full\n");
        showStack();
        return;
    }
    else
    {
        stack[++pointer] = value;
    }
}
int pop(void)
{
    if (pointer < 0)
    {
        printf("\nThe Stack is Empty.\n");
        showStack();
    }
    else
    {
        return stack[pointer--];
    }
    return -404;
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
    printf("\n\n\n\n\t\t\t\tTHANKS FOR USING\n\t\t\t......Exiting the program......\n\n\n");

    exit(0);
}
int main(void)
{
    showStack();
    while (106)
    {
        printf("\nDo you wanna input something else in stack ?(y/n)\t");
        char choose;
        scanf(" %c", &choose);
        if (toupper(choose) == 'Y')
        {
            push(takeInput());
            showStack();
        }
        else if (toupper(choose) == 'E')
        {
            stop();
        }
        else if (toupper(choose) != 'N' || toupper(choose) == 'Y' || toupper(choose) == 'E')
        {
            printf("Invalid input, please enter 'y', 'n', or 'e'.\n");
            continue;
        }
        printf("\nDo you wanna pop in stack ?(y/n)\t");
        scanf(" %c", &choose);
        if (toupper(choose) == 'Y')
        {
            printf("\n%d\t popped\n\n", pop());
            showStack();
        }
        else if (toupper(choose) == 'N')
        {
            showStack();
        }
        else if (toupper(choose) == 'E')
        {
            stop();
        }
        else if (toupper(choose) != 'N' || toupper(choose) == 'Y' || toupper(choose) == 'E')
        {
            printf("Invalid input, please enter 'y', 'n', or 'e'.\n");
            continue;
        }

        printf("If You wanna exit loop press 'e' :>");
    };
}