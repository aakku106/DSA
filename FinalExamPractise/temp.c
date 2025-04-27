#include <stdio.h>
#define MAX 10
int queue[MAX], front = -1, rear = -1;
int EnQueue(int), DeQueue();
void peek();
int main(void) {
  while (106) {
    printf("Enter Your Choice:\n\t\t1. EnQueue\n\t\t2. DeQueue\n\t\t3. "
           "Peek\n\t\t4. SHOW\n\t\t5. STOP PROGRAM\n\t\t\t");
    int choice, data;
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("\n\t--->>Enter number to Enqueue\n");
      scanf("%d", &data);
      if (EnQueue(data) != -1)
        printf("\n\t\t%d <---- is Enquyed\n", data);
      break;
    case 2:
      data = DeQueue();
      if (data != -1)
        printf("\n\t\t%d <----- is Dequyed", data);
      break;
    case 3:
      peek();
      break;
    case 5:
      return 0;
    default:
      printf("\nChoose correct optn\n");
      break;
    }
  }
  return 0;
}

int EnQueue(int data) {
  if ((rear + 1) % MAX == front) {
    printf("\nQueue is full\n");
    return -1;
  }

  if (rear == -1) {
    rear = front = 0;
    return queue[rear] = data;
  }
  rear = (rear + 1) % MAX;
  return queue[rear] = data;
}
int DeQueue() {
  if (front == -1) {
    printf("\nXXX--------Queue is EMpty---------XXX\n");
    return -1;
  }
  int remove = queue[front];
  if (front == rear)
    front = rear = -1;
  else {
    front = (front + 1) % MAX;
  }
  return remove;
}
void peek() {
  if (front == -1) {
    printf("XXX----Queue is empty----XXX\n");
    return;
  } else {
    printf("\n\t\t%d\n", queue[front]);
  }
}
