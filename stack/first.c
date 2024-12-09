#include <stdio.h>
#define MAX 10
int stack[10];
int peek = -1;
void push(int value)
{
    if (peek == MAX - 1)
    {
        printf("Stack is full");
    }
    else
    {
        stack[peek + 1] = value;
        peek++;
    }
}
int pop()
{
    if (peek == -1)
    {
        printf("Stack is empty");
        return 0;
    }
    int value = stack[peek--];
    return value;
}
int main()
{
    // while (1)
    {
        push(1);
        for (int i = 0; i < MAX; i++)
        {
            printf("%d\t", stack[i]);
        }
        printf("\n");

        push(30);
        for (int i = 0; i < MAX; i++)
        {
            printf("%d\t", stack[i]);
        }
        printf("\n");
        printf("pop value:\t%d", pop());
        printf("\n");

        printf("pop value:\t%d", pop());
        printf("\n");
        pop();
        printf("\n");

        for (int i = 0; i < MAX; i++)
        {
            printf("%d\t", stack[i]);
        }
        printf("\n");
    }
}