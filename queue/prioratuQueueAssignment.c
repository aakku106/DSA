// wap to implement a priority queue usihng an array.

#include <stdio.h>
#define size 10
int task[size];
int taskI = 0;
void enqueue(int data)
{
    if (taskI == size)
    {
        printf("Queue is full\n");
        return;
    }
    else
    {
        taskI++;
        int i = taskI - 1;
        task[i] = data;
        while (i != 0 && task[i] > task[(i - 1) / 2])
        {
            int temp = task[i];
            task[i] = task[(i - 1) / 2];
            task[(i - 1) / 2] = temp;
            i = (i - 1) / 2;
        }
    }
}
int dequeue()
{
    if (taskI == 0)
    {
        printf("Queue is empty\n");
        return -1;
    }
    int returningElement = task[0];
    int p = task[taskI - 1];
    taskI--;
    task[0] = p;
    int i = 0;
    int j = 2 * i + 1;
    while (j < taskI - 1)
    {
        if (task[j + 1] > task[j] && j + 1 < taskI)
        {
            j = j + 1;
        }
        if (task[i] > task[j])
        {
            int temp = task[i];
            task[j] = task[i];
            task[i] = temp;
            i = j;
            j = 2 * i + 1;
        }
        return returningElement;
    }
}
void print()
{
    for (int i = 0; i < taskI; i++)
    {
        printf("%d\n ", task[i]);
    }
    printf("\n");
}
int main()
{
    printf("\nbefore dequeue\t");
    enqueue(20);
    enqueue(20);
    enqueue(45);
    printf("%d\n\n", dequeue());
    printf("After dequeue\n");
    return 0;
}
