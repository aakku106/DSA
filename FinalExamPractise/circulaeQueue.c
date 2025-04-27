#include <stdio.h>
#define max 5

int queue[max], front = -1, rear = -1;

int EnQueue(int);
int DeQueue(void);
void show(void);

int main(void) {
  while (1) {
    printf("\n\tEnter your choice\n");
    printf("\t1. EnQueue\n\t2. DeQueue\n\t3. Show Queue\n\t4. Close\n");
    int choice, data;
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter Number to EnQueue: ");
      scanf("%d", &data);
      if (EnQueue(data) != -1)
        printf("%d Enqueued\n", data);
      break;

    case 2:
      data = DeQueue();
      if (data != -1)
        printf("%d DeQueued\n", data);
      break;

    case 3:
      show();
      break;

    case 4:
      return 0;

    default:
      printf("Wrong choice MF!!!\n");
      break;
    }
  }
  return 0;
}

int EnQueue(int data) {
  if ((rear + 1) % max == front) // Correct overflow check
  {
    printf("\t\tQueue is Full!\n");
    return -1;
  }
  if (front == -1) // First element
  {
    front = rear = 0;
    return queue[rear] = data;
  }
  rear = (rear + 1) % max;

  return queue[rear] = data;
}

int DeQueue(void) {
  if (front == -1) {
    printf("\t\tQueue is Empty!!\n");
    return -1;
  }
  int removed = queue[front]; // Store value before updating front
  if (front == rear)          // Reset when last element is removed
    front = rear = -1;
  else
    front = (front + 1) % max;
  return removed;
}

void show(void) {
  if (front == -1) {
    printf("Queue is Empty\n");
    return;
  }
  printf("\nQueue: ");
  int i = front;
  while (1) {
    printf("%d ", queue[i]);
    if (i == rear)
      break;
    i = (i + 1) % max;
  }
  printf("\n");
}
