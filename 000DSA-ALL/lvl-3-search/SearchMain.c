#include "SearchMain.h"
#include "../ClearScreen.h"
#include "../color.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void searching_main() {
  clear_screen();
  while (106) {
    printf(CRYON "\n\t\t_-______-_CHOOSE BETWEEN_-________-_\n" RESET);
    usleep(50000);
    printf(YELLOW "\n\t\t1. Binary Search\n" RESET);
    usleep(50000);
    printf(YELLOW "\t\t2. Linear Search \n" RESET);
    usleep(50000);
    printf(CYAN "\t\t4. To exit Program\n" RESET);
    usleep(50000);
    printf(RED "\t\t0. To exit program\n " RESET);
    int choice;
    scanf("%d", &choice);
    switch (choice) {
    case 1:

      //        binary_search();
      break;
    case 2:
      linear_main();
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
