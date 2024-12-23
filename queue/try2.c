#include <stdio.h>
#define MAX 10
int arr[MAX];
int front = -1, rarer = -1;
void printArray(void);
void isEmpty(void);
void enQueue(void);
void deQueue(void);

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
    isEmpty();
    printf("Enter the number to stage in queue\t");
    int stage;
    scanf("%d", &stage);
    arr[++rarer] = stage;
}

// Function to remove element from nth queue index.
void deQueue(void)
{
    arr[++front] = 0;
    printf("\nThe %d element of queue has been removed.\n", front);
}

// IsEmpty function to check is the array has place to fill next element.
void isEmpty()
{
    {
        if (rarer == MAX)
        {
            printf("The array is full\n");
        }
        else if (rarer == -1)
        {
            printf("THe array is empty, you can fill 10 elements queue.\n");
        }
        else
        {
            printf("Array has space, continuing filling queue ....\n");
        }
    }
}

int main(void)
{
    printArray();
    isEmpty();
    enQueue();
    printArray();
    enQueue();
    printArray();
    enQueue();
    printArray();
    deQueue();
    printArray();
    deQueue();
    printArray();
    deQueue();
    printArray();
}