#include "LinearQueue.h"
#include <stdio.h>

int front = 0, rear = -1, queue[MAX];

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
  if (rear < front)
    return -1;
  return 0;
}
void Lpeek(void) {
  if (IsEmpty() != -1) {
    printf("\n\t\t|---%d<---Is In Front---|\n", queue[front]);
    return;
  }
  printf("\nXXX---QUEUE is EMPTY---XXX\n");
}
