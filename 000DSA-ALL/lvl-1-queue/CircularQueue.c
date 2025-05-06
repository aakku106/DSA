#include "CircularQueue.h"
#include "../color.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int queue[MAX], Cfront = -1, Crear = -1;
void clear_screen() {
  printf("\033[2J\033[H");
  fflush(stdout);
}

void circular_queue(void) {
  clear_screen();
  while (106) {
    printf(CRYON
           "\n\n\t\t===============Choose betn=======================\n" RESET);
    usleep(50000);
    printf(YELLOW "\t\t1. TO enqueue\n" RESET);
    usleep(50000);
    printf(YELLOW "\t\t2. TO dequeue\n" RESET);
    usleep(50000);
    printf(YELLOW "\t\t3. To Peek\n" RESET);
    usleep(50000);
    printf(CYAN "\t\t4. To exit Circular queue\n" RESET);
    usleep(50000);
    printf(RED "\t\t0.To exit program\n " RESET);
    int choose, data;
    scanf("%d", &choose);
    switch (choose) {
    case 1:
      printf("--->\t\tEnter number to qneueue\n");
      scanf("%d", &data);
      if (Enqueue(data) != -1)
        printf(GREEN "\t\t--->%d<---Enqueued\n", data);
      break;
    case 2:
      data = Dequeue();
      if (data != -1)
        printf(GREEN "\t\t---->%d<----Dequeued\n", data);
      break;
    case 3:
      Cpeek();
      break;
    case 4:
      clear_screen();
      return;
    case 0:
      printf(YELLOW "Exiting...\n" RESET);
      exit(0);
    default:
      printf(RED "Chose correct Option\n" RESET);
    }
  }
}

int Enqueue(int data) {
  if ((Crear + 1) % MAX == Cfront) {
    printf(RED "XXX---Queue is FULL----XXX\n" RESET);
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
    printf(RED "XXX---queue is EMQTY----XXX\n" RESET);
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
    printf(RED "xxx___It empty___xxx\n" RESET);
    return;
  }
  printf(YELLOW "\n\t\t--->%d<---is coming next\n", queue[Cfront]);
}
