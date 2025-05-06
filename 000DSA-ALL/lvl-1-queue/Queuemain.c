#include "CircularQueue.h"
#include "LinearQueue.h"
#include <stdio.h>
void queue_main_call() {
  int choice;
  while (106) {
    printf("\nChoose Data Structure:\n");
    printf("\n|\t\t--1. Linear Queue\n|\t\t2. Circular Queue\n|\t\t0. Exit\n");
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
