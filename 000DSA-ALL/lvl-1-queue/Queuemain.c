#include "../ClearScreen.h"
#include "../color.h"
#include "CircularQueue.h"
#include "LinearQueue.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void queue_main_call() {
  clear_screen();
  int choice;
  while (106) {
    printf("\n\n\t\t\033[1;34m ===========Choose Data "
           "Structure:==========\033[0m\n");
    usleep(50000);
    printf("\n\t\t\033[1;32m--1. Linear Queue\033[0m\n");
    usleep(50000);
    printf("\t\t\033[1;33m--2. Circular Queue\033[0m\n");
    usleep(50000);
    printf(CYAN "\t\t4. To exit Circular queue\n" RESET);
    usleep(50000);
    printf(RED "\t\t0.To exit program\n " RESET);
    printf("\n\t\tEnter choice---->\t");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      linear_queue();
      break;
    case 2:
      circular_queue();
      break;
    case 4:
      clear_screen();
      return;
    case 0:
      printf("Exiting...\n");
      exit(0);
    default:
      printf("Invalid choice!\n");
      break;
    }
  }
  return;
}
