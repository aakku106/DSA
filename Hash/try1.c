#include <stdio.h>
#include <stdlib.h>
int has_function(int, int);
int main(void) {
  int *hasTable = calloc(10, sizeof(int));
  int sizeOfTable = 10;
  int key;
  printf("\nhow many input do we have ??\t");
  int input;
  scanf("%d", &input);
  for (int i = 0; i <= input; i++) {
    printf("\n\tEnter key\t");
    scanf("%d", &key);
    hasTable[has_function(key, sizeOfTable)] = key;
    printf("\n");
    for (int j = 0; j < sizeOfTable; j++)
      printf("\t%d", hasTable[j]);
  }
  free(hasTable);
  return 0;
}
int has_function(int key, int size) { return key % size; }
