#include "ClearScreen.h"
#include "color.h"
#include "lvl-1-queue/Queuemain.h"
#include "lvl-2-stack/stack.h"
#include <stdio.h>
#include <sys/_types/_sigaltstack.h>
#include <unistd.h>

int main() {
  clear_screen();
  printf(CRYON "\n\t\t_-______-_CHOOSE BETWEEN_-________-_ \n" RESET);
  usleep(50000);
  printf(YELLOW "\n\t\t1.STACK\n" RESET);
  usleep(50000);
  printf(YELLOW "\n\t\t2.QUEUE\n" RESET);
  usleep(50000);
  printf(CYAN "\t\t4. To exit Circular queue\n" RESET);
  usleep(50000);
  printf(RED "\t\t0.To exit program\n " RESET);
  int choice;
  scanf("%d", &choice);
  switch (choice) {
  case 1:
    stack_main_call();
    break;
  case 2:
    queue_main_call();
  }
  return 0;
}
