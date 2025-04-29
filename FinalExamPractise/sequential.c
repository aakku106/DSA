#include <stdio.h>
int linearSearch(int arr[], int, int);
int main() {
  int arr[] = {90, 2, 9, 2, 44, 6, 3};
  int lenArr = sizeof(arr) / sizeof(arr[0]);
  int target, result;
  while (106) {
    printf("\nEnter target or -1 to close\n\n");
    scanf("%d", &target);
    switch (target) {
    case -1:
      return 0;
    default:
      result = linearSearch(arr, lenArr, target);
      if (result != -1) {
        printf("\nElement %d found at index %d.\n", target, result);
        break;
      }
      printf("\nElement %d not found in the array.\n", target);
      break;
    }
  }
  return 0;
}
int linearSearch(int arr[], int len, int target) {
  for (int i = 0; i < len; i++)
    if (arr[i] == target)
      return i;
  return -1;
}
