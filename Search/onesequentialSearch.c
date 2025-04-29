#include <stdbool.h>
#include <stdio.h>
int main() {
  int numbers[] = {1, 3, 2, 4, 5};
  bool ifOutOfIndex = false;
  printf("Enter number to search from array\t");
  int numberToSearch;
  int sizeOfArray = 4;
  scanf("%d", &numberToSearch);
  for (int i = 0; i <= sizeOfArray; i++) {
    if (numberToSearch == numbers[i]) {
      ifOutOfIndex = true;
      printf("It was in the index\t%d", i);
      break;
    }
  }

  if (!ifOutOfIndex) {
    printf("\nNumber not found in array\n");
  }
  return 0;
}
