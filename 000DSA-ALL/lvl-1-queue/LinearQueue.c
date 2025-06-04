#include "../utilities/Utlilties.h"
#include "Queue.h"
#include <stdio.h>
#include <stdlib.h>

int front = 0, rear = -1, queue[MAX];

void linear_queue(void) {
  clear_screen();
  while (106) {
    printf(CRYON "Enter ur choice\n\t\t1. Enqueue\n\t\t2. Dequeue\n\t\t3. "
                 "peek\n\t\t0. choose ZERO to colse program\n\t\t4. TO Exit "
                 "LinearQueue" RESET);
    int choose, data;
    scanf("%d", &choose);
    switch (choose) {
    case 1:
      printf(YELLOW "\nEnter num to Enqueue\n");
      scanf("%d", &data);
      if (EnQueue(data) != -1)
        printf(GREEN "\n|---\t\t%d<----Enqueues---|\n", data);
      break;
    case 2:
      data = DeQueue();
      if (data != -1)
        printf(GREEN "\n|---\t\t%d<----DEQUYED---|\n", data);
      break;
    case 3:
      Lpeek();
      break;
    case 0:
      printf(RED "Exiting...\n" RESET);
      exit(0);
    case 4:
      clear_screen();
      return;
    default:
      printf(RED "\n\t\tCHOOE CORRECT OPTION\n" RESET);
    }
  }
}

int EnQueue(int data) {
  if (IsFull() != -1)
    return queue[++rear] = data;
  printf(RED "\nXXX---Queue is full---XXX\n");
  return -1;
}
int DeQueue(void) {
  if (IsEmpty() != -1)
    return queue[front++];
  printf(RED "\nXXX___Queue is empty---XXX\n");
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
    printf(GREEN "\n\t\t|---%d<---Is In Front---|\n", queue[front]);
    return;
  }
  printf(RED "\nXXX---QUEUE is EMPTY---XXX\n" RESET);
}
