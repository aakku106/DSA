#include <stdio.h>
#define max 5
int queue[max],
    front = 0,
    rear = -1,
    EnQueue(int),
    DeQueue(),
    peek(),
    IsEmpty(),
    IsFull();
int main(void)
{
    // printf("\t%d\t\n", EnQueue(1));
    // printf("\t%d\t\n", EnQueue(2));
    // printf("\t%d\t\n", EnQueue(3));
    // printf("\t%d\t\n", EnQueue(4));
    // printf("\t%d\t\n", EnQueue(5));
    // printf("\t%d\t\n", EnQueue(5)); // error
    // printf("\t%d\t\n", DeQueue());
    // printf("\t%d\t\n", DeQueue());
    // printf("\t%d\t\n", DeQueue());
    // printf("\t%d\t\n", DeQueue());
    // printf("\t%d\t\n", DeQueue());
    // printf("\t%d\t\n", DeQueue());
    printf("Enter ur choice");
    int choice, data;
    printf("\t\t\tEnter ur Choice\n\t1.ENqueue\n\t2.Dequeue\n\t3.Close\n")
        scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\tEnter Number to Enqueue\n");
        scanf("%d", &data);
        EnQueue(data);
        break;
    case 2:
        DeQueue();
        break;
    case 3:
        return 0;
    }

    return 0;
}
int EnQueue(int data)
{
    if (IsFull() == 0)
        return queue[++rear] = data;
    printf("\t\tQueue is full\n");
    return -1;
}
int DeQueue()
{
    if (IsEmpty() == 0)
        return queue[front++];
    printf("\t\tQueue is Empty !!\n");
    return -1;
}

int IsFull()
{
    if (rear >= max - 1)
        return -1;
    return 0;
}
int IsEmpty()
{
    if (front > rear)
        return -1;
    return 0;
}