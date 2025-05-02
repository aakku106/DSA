#include <stdio.h>
int main(void) {
  printf("How many elements do we have in array");
  int numArray;
  scanf("%d", &numArray);
  int numbers[numArray];
  printf("enter the elements of array");
  for (int i = 0; i < numArray; i++) {
    scanf("%d", &numbers[i]);
  }
  int low = 0;
  int high = (sizeof(numbers) / sizeof(numbers[0])) - 1;
  int mid = (low + high) / 2;
  printf("Enrer the number to finf index of ");
  int numberIndex;
  scanf("%d", &numberIndex);
  while (low <= high) {
    if (numberIndex == numbers[mid]) {
      printf("Number was in index\t%d", mid);
      break;
    } else if (numberIndex < numbers[mid]) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
    mid = (low + high) / 2;
  }
  return 0;
}
