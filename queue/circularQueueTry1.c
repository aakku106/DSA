#include <stdio.h>
#define MAX 5
int arr[MAX];
int front = 0, rarer = -1;
void printArray(void);
int isEmpty(void);
void enQueue(void);
void deQueue(void);
void peek(void);
int circle = 0;

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
        if (circle == 106 && front > rarer)
        {
            rarer = -1;
            circle = 0;
            return;
        }
        if (circle == 0)
        {
            printf("\nTHe array/queue is FUll.\n");
            return;
        }
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
    if (design == 106 || front == MAX)
    {
        printf("\nNothing to dequeue...The queue is empty\n");

        return;
    }
    else
    {
        arr[front++] = 0;
        printf("\nThe\t%d\telement of queue has been removed.\n", front);
        if (isEmpty() == 10)
        {
            // front = 0;
            rarer = -1;
            circle = 106;
        }
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
    if (design == 106 || front == MAX - 1)
        printf("\nThe array/queue is empty, nothing to show...\n");
    else
        printf("\nThe front-most element in queue is\t%d\nand last element is\t%d\n", arr[front], arr[rarer]);
}

int main(void)
{
    int choose;
    printf("\nWelcome, this shows the example of linear queue with size %d\n\t\tchoose following options to perform task in queue\n", MAX);
    do
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Print Queue\n5. Exit\n");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            enQueue();
            break;
        case 2:
            deQueue();
            break;
        case 3:
            peek();
            break;
        case 4:
            printArray();
            break;
        case 5:
            printf("Exiting program.....\nThanks for using!!!!!\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    } while (choose != 5);
}