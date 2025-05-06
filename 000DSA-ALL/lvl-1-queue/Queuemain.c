#include "CircularQueue.h"
#include "LinearQueue.h"
#include <stdio.h>
void queue_main_call() {
  int choice;
  while (106) {
    printf("\t\t\033[1;34mChoose Data Structure:\033[0m\n");
    printf("\t\t\033[1;32m--1. Linear Queue\033[0m\n");
    printf("\t\t\033[1;33m--2. Circular Queue\033[0m\n");
    printf("\t\t\033[1;31m--0. Exit\033[0m\n");
    printf("Enter choice---->\t");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      linear_queue();
      break;
    case 2:
      circular_queue();
      break;
    case 0:
      printf("Exiting...\n");
      return;
    default:
      printf("Invalid choice!\n");
      break;
    }
  }
  return;
}
