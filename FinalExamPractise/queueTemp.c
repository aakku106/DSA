#include <stdio.h>
#define MAX 5
int front = 0, rear = -1, queue[MAX], IsFull(void), IsEmpty(void), EnQueue(int),
    DeQueue(void);
void peek(void), show(void);
int main(void) {
  while (106) {
    printf(
        "Enter ur choice\n\t\t1. Enqueue\n\t\t2. Dequeue\n\t\t3. peek\n\t\t");
    int choice, data;
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("\nEnter num to Enqueue\n");
      scanf("%d", &data);
      if (EnQueue(data) != -1)
        printf("\n|---\t\t%d<----Enqueues---|\n", data);
      break;
    case 2:
      data = DeQueue();
      if (data != -1)
        printf("\n|---\t\t%d<----DEQUYED---|\n", data);
      break;
    case 3:
      peek();
      break;
    case 4:
      return 0;
    default:
      printf("\n\t\tCHOOE CORRECT OPTION\n");
    }
  }
  return 0;
}
int EnQueue(int data) {
  if (IsFull() != -1)
    return queue[++rear] = data;
  printf("\nXXX---Queue is full---XXX\n");
  return -1;
}
int DeQueue(void) {
  if (IsEmpty() != -1)
    return queue[front++];
  printf("\nXXX___Queue is empty---XXX\n");
  return -1;
}
int IsFull(void) {
  if (rear >= MAX - 1)
    return -1;
  return 0;
}
int IsEmpty(void) {
  if (rear < 0)
    return -1;
  return 0;
}
void peek(void) {
  if (IsEmpty() != -1) {
    printf("\n\t\t|---%d<---Is In Front---|\n", queue[front]);
    return;
  }
  printf("\nXXX---QUEUE is EMPTY---XXX\n");
}
