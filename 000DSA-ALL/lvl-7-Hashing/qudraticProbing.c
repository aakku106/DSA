#include "./Hashing.h"
#include <stdio.h>
#include <stdlib.h>
void qudratic(void) {
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
  if (input > sizeOfTable)
    printf("\nWarning: You're inserting more keys than table size. Collisions "
           "incoming!\n");
  for (int i = 0; i < input; i++) {
    printf("\n\tEnter key\t");
    scanf("%d", &key);
    int index = has_function(key, sizeOfTable), j = 0, oIndex = index;
    while (hasTable[index] != -1) {
      printf("\nCollision occured at %d, trying to resolve...\n", index);
      j++;
      index =
          (oIndex + j * j) % sizeOfTable; // Circular movment to next same like
                                          // circular quque but in sus way

      if (j > sizeOfTable) {
        printf("\nNo space in array allocated by you, so %d can't be "
               "inserted...\n",
               key);
        return;
      }
    }
    if (hasTable[index] == -1)
      hasTable[index] = key;
    printf("\n");
    for (int k = 0; k < sizeOfTable; k++)
      printf("\t|  %d", hasTable[k]);
  }
  free(hasTable);
  return;
}
// int has_function(int key, int size) { return key % size; }
