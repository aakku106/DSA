#include "CircularQueue.h"
#include <stdio.h>
#include <stdlib.h>
int queue[MAX], Cfront = -1, Crear = -1;

void circular_queue(void) {
  while (106) {
    printf("Choose betn:\n\t\t1. TO enqueue\n\t\t2. TO dequeue\n\t\t3.To "
           "Peek\n\t\t4.To exit Circular queue\n\t\t0. To exit program\n");
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
      Cpeek();
      break;
    case 4:
      return;
    case 0:
      printf("Exiting...\n");
      exit(0);
    default:
      printf("Chose correct Option\n");
    }
  }
}

int Enqueue(int data) {
  if ((Crear + 1) % MAX == Cfront) {
    printf("Queue is fukk\n");
    return -1;
  }
  if (Crear < 0) {
    Cfront = Crear = 0;
    return queue[Crear] = data;
  }
  Crear = (Crear + 1) % MAX;
  return queue[Crear] = data;
}
int Dequeue(void) {
  if ((Cfront < 0)) {
    printf("emptuyuyy queue\n");
    return -1;
  }
  int remove = queue[Cfront];
  if (Crear == Cfront)
    Cfront = Crear = -1;
  else
    Cfront = (Cfront + 1) % MAX;
  return remove;
}
void Cpeek(void) {
  if (Cfront < 0) {
    printf("It empty\n");
    return;
  }
  printf("\n\t\t--->%d<---is coming next\n", queue[Cfront]);
}
