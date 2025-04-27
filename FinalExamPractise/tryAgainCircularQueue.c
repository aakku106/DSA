#include <stdio.h>
#define max 5
int cQueue[max];
int front = -1, rear = -1;
int EnQueue(int);
int DeQueue(void);
void show();

int main(void) {
  while (106) {

    printf("\n\t\t\tEnter ur choice kiddo!!!\n\t\t1. Enqueue\n\t\t2. "
           "Dequeue\n\t\t3. Show\n\t\t4. Stop\n");
    int choice, data;
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("\n\tEnter Ur data to Enqueue\t\t");
      scanf("%d", &data);
      if (EnQueue(data) != -1) {
        printf("\n\t\t%d enqueued <---\n", data);
      }
      break;
    case 2:
      data = DeQueue();
      if (data != -1)
        printf("\n\t\t%d dequeued <---\n", data);
      break;
    case 3:
      show();
      break;
    case 4:
      return 0;
      break;
    default:
      printf("\n\t\tX---Choose between 1 to 4---X\n");
      break;
    }
  }
  return 0;
}
int EnQueue(int data) {
  if ((rear + 1) % max == front) {
    printf("\n\t\tX---Queue is full---X\n");
    return -1;
  }
  if (rear == -1) {
    front = rear = 0;
    return cQueue[rear] = data;
  }
  rear = (rear + 1) % max;
  return cQueue[rear] = data;
}
int DeQueue() {
  if (front == -1) {
    printf("\n\t\tX---queue is empty---X\n");
    return -1;
  }
  int remove = cQueue[front];
  if (front == rear)
    front = rear = -1;
  else
    front = (front + 1) % max;
  return remove;
}
void show(void) {
  if (front == -1) {
    printf("\n\t\tX---Queue is empty nothin to show here---X\n");
    return;
  }
  printf("\n\t\tQueue:\t");
  int i = front;
  while (106) {
    printf("%d ", cQueue[i]);
    if (i == rear) {
      break;
    }
    i = (i + 1) % max;
  }
  printf("\n");
}
