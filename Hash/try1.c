#include <stdio.h>
#include <stdlib.h>
int has_function(int, int);
int main(void) {
  printf("\nInitilize the size of table(DEFULT 10)\t");
  int sizeOfTable = 10;
  scanf("%d", &sizeOfTable);
  int *hasTable = calloc(sizeOfTable, sizeof(int));
  for (int i = 0; i < sizeOfTable;) {
    hasTable[i++] =
        -1; // Finding out that C compiler only spams 0 with calloc lol  XD.
  }
  int key;
  printf("\nhow many input do we have ??\t");
  int input;
  scanf("%d", &input);
  for (int i = 0; i <= input; i++) {
    printf("\n\tEnter key\t");
    scanf("%d", &key);
    if (hasTable[i] != -1)
      printf("\n\t\t Checl another file, we have no probing here\n");
    else {
      hasTable[has_function(key, sizeOfTable)] = key;
      i--;
    }
    printf("\n");
    for (int j = 0; j < sizeOfTable; j++)
      printf("\t%d", hasTable[j]);
  }
  free(hasTable);
  return 0;
}
int has_function(int key, int size) { return key % size; }
