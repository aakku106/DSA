#include "lvl-1-queue/Queuemain.h"
#include <stdio.h>
#include <sys/_types/_sigaltstack.h>

int main() {
  printf("Choose\n");
  int choice;
  scanf("%d", &choice);
  switch (choice) {
  case 1:

    queue_main_call();
    break;
  case 2:
    stack_main_call();
  }
  return 0;
}
