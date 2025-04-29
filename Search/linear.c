#include <stdio.h>

int linearSearch(int arr[], int len, int target) {
  for (int i = 0; i < len; i++) {
    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}

int main() {
  int arr[] = {90, 2, 9, 2, 44, 6, 3};
  int lenArr = sizeof(arr) / sizeof(arr[0]);
  int target = 44;

  int result = linearSearch(arr, lenArr, target);

  if (result != -1) {
    printf("Element %d found at index %d.\n", target, result);
  } else {
    printf("Element %d not found in the array.\n", target);
  }

  printf("ProgramBy: AdarashaGaihre\n");

  return 0;
}
