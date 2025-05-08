#include <stdio.h>
void clear_screen(void) {
  printf("\033[2J\033[H");
  fflush(stdout);
}
