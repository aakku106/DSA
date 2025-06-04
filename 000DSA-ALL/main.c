#include "lvl-1-queue/Queue.h"
#include "lvl-2-stack/stack.h"
#include "lvl-3-search/SearchMain.h"
#include "utilities/Utlilties.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/_types/_sigaltstack.h>
#include <unistd.h>

int main(void) {
  clear_screen();
  while (106) {
    printf(CRYON "\n\t\t_-______-_CHOOSE BETWEEN_-________-_\n" RESET);
    usleep(50000);
    printf(YELLOW "\n\t\t1. STACK\n" RESET);
    usleep(50000);
    printf(YELLOW "\t\t2. QUEUE\n" RESET);
    usleep(50000);
    printf(YELLOW "\t\t3. Search\n");
    usleep(50000);
    printf(CYAN "\t\t4. To exit Program\n" RESET);
    usleep(50000);
    printf(RED "\t\t0. To exit program\n " RESET);
    int choice;
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      stack_main_call();
      break;
    case 2:
      queue_main_call();
      break;
    case 3:
      searching_main();
      break;
    case 4:
      clear_screen();
      return 0;
    case 0:
      exit(0);
    default:
      printf(RED "\t\t ?-?-?---------Choose correct optn-------!!!\n" RESET);
    }
  }
}
