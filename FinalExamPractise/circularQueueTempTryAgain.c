#include <stdio.h>
#define MAX 3
int queue[MAX], front = -1, rear = -1, Enqueue(int), Dequeue(void);
void peek(void);
int main(void) {
  while (106) {
    printf("Choose betn 1,2,3,4\n");
    int choose, data;
    scanf("%d", &choose);
    switch (choose) {
    case 1:
      printf("\t\tEnter number to qneueue\n");
      scanf("%d", &data);
      if (Enqueue(data) != -1)
        printf("%d<---Enqueued\n", data);
      break;
    case 2:
      data = Dequeue();
      if (data != -1)
        printf("%d----Dequeued\n", data);
      break;
    case 3:
      peek();
      break;
    case 4:
      return 0;
    default:
      printf("Chose correct wefkopwfk\n");
    }
  }
  return 0;
}
int Enqueue(int data) {
  if ((rear + 1) % MAX == front) {
    printf("Queue is fukk\n");
    return -1;
  }
  if (rear < 0) {
    front = rear = 0;
    return queue[rear] = data;
  }
  rear = (rear + 1) % MAX;
  return queue[rear] = data;
}
int Dequeue(void) {
  if ((front < 0)) {
    printf("emptuyuyy queue\n");
    return -1;
  }
  int remove = queue[front];
  if (rear == front)
    front = rear = -1;
  else
    front = (front + 1) % MAX;
  return remove;
}
void peek(void) {
  if (front < 0) {
    printf("It empty\n");
    return;
  }
  printf("\n\t\t--->%d<---is coming next\n", queue[front]);
}
