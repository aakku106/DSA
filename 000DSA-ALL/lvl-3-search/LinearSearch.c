#include "../utilities/Utlilties.h"
#include "SearchMain.h"
#include <stdio.h>
void linear_main(void) {
  clear_screen();
  printf(RED "NOTE:" CRYON "\nTHis is mear example, it has only defult values "
             "{90,2,9,33,44,6,3}\n" RESET);
  int arr[] = {90, 2, 9, 33, 44, 6, 3};
  int lenArr = sizeof(arr) / sizeof(arr[0]);
  int target, result;
  while (106) {
    printf(YELLOW "\nEnter target or -1 to close\t" RESET);
    scanf("%d", &target);
    switch (target) {
    case -1:
      clear_screen();
      return;
    default:
      result = linear_search(arr, lenArr, target);
      if (result != -1) {
        printf(GREEN "\nElement %d found at index %d.\n", target, result);
        break;
      }
      printf(RED "\nElement %d not found in the array.\n", target);
      break;
    }
  }
  return;
}
int linear_search(int arr[], int len, int target) {
  for (int i = 0; i < len; i++)
    if (arr[i] == target)
      return i;
  return -1;
}
