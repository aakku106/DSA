#include <stdio.h>
#define max 5
int queue[max], front = 0, rear = -1, EnQueue(int), DeQueue(void),
                IsEmpty(void), IsFull(void);
void peek(void);

int main(void) {
  while (106) {
    printf("\n\tEnter ur choice\t");
    int choice;
    printf("\n\t\t\tEnter ur "
           "Choice\n\t1.ENqueue\n\t2.Dequeue\n\t3.Peek\n\t4.Close\n");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("\tEnter Number to Enqueue\t");
      int data;
      scanf("%d", &data);
      printf("\t\t%d Enqueued", EnQueue(data));

      break;
    case 2:
      printf("\t\t%d DeQueued", DeQueue());
      break;
    case 3:
      peek();
      break;
    case 4:
      return 0;
      break;
    default:
      printf("Wrong choice MF!!!\n");
      break;
    }
  }
  return 0;
}
int EnQueue(int data) {
  if (IsFull() == 0)
    return queue[++rear] = data;
  printf("\t\tQueue is full\n");
  return -1;
}
int DeQueue(void) {
  if (IsEmpty() == 0)
    return queue[front++];
  printf("\t\tQueue is Empty !!\n");
  return -1;
}
void peek(void) {
  if (IsEmpty() == 0)
    printf("\t\t\t%d\t is in front \n", queue[front]);
  printf("Queue is Empty");
}

int IsFull() {
  if (rear >= max - 1)
    return -1;
  return 0;
}
int IsEmpty() {
  if (front > rear)
    return -1;
  return 0;
}
