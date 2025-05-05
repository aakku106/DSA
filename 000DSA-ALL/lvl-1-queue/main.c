#include "CircularQueue.h"
#include "LinearQueue.h"
#include <stdio.h>

int main() {
  int choice, choose;

  while (106) {
  a:
    printf("\nChoose Data Structure:\n");
    printf("\n|\t\t--1. Linear Queue\n|\t\t2. Circular Queue\n|\t\t0. Exit\n");
    printf("Enter choice---->\t");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      while (106) {
        printf("Enter ur choice\n\t\t1. Enqueue\n\t\t2. Dequeue\n\t\t3. "
               "peek\n\t\t0. choose ZERO to colse program\n\t\t4. TO Exit "
               "LinearQueue");
        int data;
        scanf("%d", &choose);
        switch (choose) {
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
          Lpeek();
          break;
        case 0:
          printf("Exiting...\n");
          return 0;
        case 4:
          goto a;
          break;
        default:
          printf("\n\t\tCHOOE CORRECT OPTION\n");
        }
      }
    case 2:
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
          goto a;
          break;
        case 0:
          printf("Exiting...\n");
          return 0;
        default:
          printf("Chose correct wefkopwfk\n");
        }
      }

    case 0:
      printf("Exiting...\n");
      return 0;

    default:
      printf("Invalid choice!\n");
      break;
    }
  }

  return 0;
}
