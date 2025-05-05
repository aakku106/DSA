#include "CircularQueue.h"
#include <stdio.h>
int queue[MAX], Cfront = -1, Crear = -1;

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
