#include <stdio.h>

#define SIZE 10

int queue[SIZE];
int front = 0;
int rear = -1;

void enqueue(int item)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        queue[++rear] = item;
    }
}

int dequeue()
{
    if (front > rear)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        int item = queue[front++];
        return item;
    }
}

int isEmpty()
{
    return front > rear;
}

int peek()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        return queue[front];
    }
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d", queue[i]);
    }
    printf("\n");

    enqueue(1);
    for (int i = 0; i < 10; i++)
    {
        printf("%d", queue[i]);
        // queue[i];
    }
    printf("\n");

    enqueue(2);
    for (int i = 0; i < 10; i++)
    {
        printf("%d", queue[i]);
        // queue[i];
    }
    printf("\n");

    enqueue(3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d", queue[i]);
        // queue[i];
    }
    printf("\n");

    printf("Front of the queue: %d\n", peek());
    printf("\n");

    while (!isEmpty())
    {
        printf("Dequeued: %d\n", dequeue());
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", queue[i]);
        // queue[i];
    }
    printf("\n");
    return 0;
}