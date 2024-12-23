#include <stdio.h>
#define MAX 10
int arr[MAX];
int front = 0, rarer = -1;
void printArray(void);
int isEmpty(void);
void enQueue(void);
void deQueue(void);
void peek(void);

// Function to show elements of array.
void printArray(void)
{
    printf("\n");
    for (int i = 0; i < MAX;)
        printf("%d\t", arr[i++]);
    printf("\n");
}

// Function to fill up nth element in queue.
void enQueue(void)
{
    int design = isEmpty();
    if (design == 10)
    {
        printf("\nTHe array/queue is FUll.\n");
        return;
    }
    else
    {
        printf("Enter the number to stage in queue\t");
        int stage;
        scanf("%d", &stage);
        arr[++rarer] = stage;
    }
}

// Function to remove element from nth queue index.
void deQueue(void)
{
    int design = isEmpty();
    if (design == 106 || front == 10)
    {
        printf("\nNothing to dequeue...The queue is empty\n");
        return;
    }
    else
    {
        arr[front++] = 0;
        printf("\nThe\t%d\telement of queue has been removed.\n", front);
    }
}

// IsEmpty function to check is the array has place to fill next element.
int isEmpty()
{
    {
        if (rarer == MAX - 1)
        {
            // printf("The array/queue is full\n");
            return 10;
        }
        else if (rarer == -1)
        {
            // printf("THe array is empty, you can fill 10 elements queue.\n");
            return 106;
        }
        else
        {
            // printf("Array has space, continuing filling queue ....\n");
            return 0;
        }
    }
}

void peek(void)
{
    int design = isEmpty();
    if (design == 106 || front == 10)
        printf("\nThe array/queue is empty, nothing to show...");
    else
        printf("\nThe front-most element in queue is\t%d\n", arr[front]);
}

int main(void)
{
    for (int i = 0; i < 20; i++)
    {
        peek();
        enQueue();
        printArray();
    }
    for (int i = 0; i < 20; i++)
    {
        peek();
        deQueue();
        printArray();
    }

    peek();
    printArray();
    enQueue();
    printArray();
    peek();
    // enQueue();
    // printArray();
    // enQueue();
    // printArray();
    // enQueue();
    // printArray();
    // enQueue();
    // printArray();
    // enQueue();
    // printArray();
    // enQueue();
    // printArray();
    // enQueue();
    // printArray();
    // enQueue();
    // printArray();
    // enQueue();
    // printArray();
    // peek();
    // deQueue();
    // peek();
    // deQueue();
    // peek();
    // deQueue();
    // peek();
    // deQueue();
    // peek();
    // deQueue();
    // peek();
    // deQueue();
    // peek();
    // deQueue();
    // peek();
    // deQueue();
    // peek();
    // deQueue();
    // peek();
    // deQueue();
    // peek();
    // deQueue();
    // peek();
}