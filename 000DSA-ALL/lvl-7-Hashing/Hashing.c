#include "Hashing.h"
#include "../utilities/Utlilties.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void hashing(void) {
  clear_screen();
  while (106) {
    printf(CRYON "\n\t\t_-______-_CHOOSE BETWEEN_-________-_\n" RESET);
    usleep(50000);
    printf(YELLOW "\n\t\t1. Normal\n" RESET);
    usleep(50000);
    printf(YELLOW "\t\t2. Linear Probing\n" RESET);
    usleep(50000);
    printf(YELLOW "\t\t3. Qudratic Probing\n");
    usleep(50000);
    printf(CYAN "\t\t4. To exit Program\n" RESET);
    usleep(50000);
    printf(RED "\t\t0. To exit program\n " RESET);
    int choice;
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      normal();
      break;
    case 2:
      linear();
      break;
    case 3:
      qudratic();
      break;
    case 4:
      clear_screen();
      return;
    case 0:
      exit(0);
    default:
      printf(RED "\t\t ?-?-?---------Choose correct optn-------!!!\n" RESET);
    }
  }
}
