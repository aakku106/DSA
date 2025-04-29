#include <stdio.h>
int binarySearch(int arr[], int, int);
int main(void) {
  printf("How many elements do we have in array\t");
  int numArray;
  scanf("%d", &numArray);
  int numbers[numArray];
  int length = sizeof(numbers) / sizeof(numbers[0]);
  printf("enter the elements of array\t");
  for (int i = 0; i < numArray; i++) {
    scanf("%d", &numbers[i]);
  }
  while (106) {
    printf("Enrer the number to finf index of or -1 to exit\t");
    int numberIndex, result;
    scanf("%d", &numberIndex);
    switch (numberIndex) {
    case -1:
      return 0;
    default:
      result = binarySearch(numbers, length, numberIndex);
      if (result != -1) {
        printf("\n%d fount in %d index\n", numberIndex, result);
        break;
      }
      printf("\n%d not in array\n", numberIndex);
      break;
    }
  }
  return 0;
}
int binarySearch(int arr[], int len, int tar) {
  int low = 0, high = len - 1, mid = (low + high) / 2;
  while (low <= high) {
    if (arr[mid] == tar)
      return mid;
    else if (arr[mid] < tar)
      low = mid + 1;
    else
      high = mid - 1;
    mid = (high + low) / 2;
  }
  return -1;
}
