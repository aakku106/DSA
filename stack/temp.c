#include <stdio.h>
#include <stdlib.h>

int pointer = -1;
int stack[100]; // You can initialize this with a default size

void push(int value, int maxSize)
{
    if (pointer > maxSize - 1)
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

void showStack(int maxSize)
{
    printf("\n");
    for (int i = 0; i <= pointer; i++) // Show stack until the pointer position
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
    int maxSize = 100; // Default value
    printf("Enter the size of stack/array (Default:%d): ", maxSize);
    scanf("%d", &maxSize); // Read the size from the user

    showStack(maxSize);
    while (1)
    {
        printf("\nDo you wanna input something else in stack ?(y/n)\t");
        char choose;
        scanf(" %c", &choose);
        if (choose == 'y')
        {
            push(takeInput(), maxSize);
            showStack(maxSize);
        }
        printf("\nDo you wanna pop in stack ?(y/n)\t");
        scanf(" %c", &choose);
        if (choose == 'y')
        {
            printf("%d", pop());
            showStack(maxSize);
        }
        else if (choose == 'n')
        {
            showStack(maxSize);
        }

        printf("If You wanna exit loop press 'e' :>");
        if (choose == 'e')
        {
            stop();
        }
    }
}
