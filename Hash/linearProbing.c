#include <stdio.h>
#include <stdlib.h>
int has_function(int, int);
int main(void) {
  printf("\nInitilize the size of table(DEFULT 10)\t");
  int sizeOfTable = 10;
  scanf("%d", &sizeOfTable);
  int *hasTable = calloc(sizeOfTable, sizeof(int));
  for (int i = 0; i < sizeOfTable;)
    hasTable[i++] = -1;
  int key;
  printf("\nhow many input do we have ??\t");
  int input;
  scanf("%d", &input);
  for (int i = 0; i <= input; i++) {
    printf("\n\tEnter key\t");
    scanf("%d", &key);
    int index = has_function(key, sizeOfTable);
    while (hasTable[index] != -1)
      index = (index + 1) %
              sizeOfTable; // Circular ovment to next same like circular quque
    if (hasTable[index] > sizeOfTable + 1) {
      printf("\nNo space in array allocated by you ...\n");
      return 0;
    }
    hasTable[index] = key;
    printf("\n");
    for (int j = 0; j < sizeOfTable; j++)
      printf("\t%d", hasTable[j]);
  }
  free(hasTable);
  return 0;
}
int has_function(int key, int size) { return key % size; }
