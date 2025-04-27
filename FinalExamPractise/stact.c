#include <stdio.h>
#define MAX 3
int stack[MAX], pop(), push(int), isEmpty(), isFull(), pointer = -1;
void peek();
int main(void) {
  while (106) {
    printf("Choose 1,2,3,4\n");
    int choose, data;
    scanf("%d", &choose);
    switch (choose) {
    case 1:
      printf("\nENter number to put in stack\n");
      scanf("%d", &data);
      if (push(data) != -1)
        printf("\n\t\t--->%d<---Pushed to stack's top\n", data);
      break;
    case 2:
      data = pop();
      if (data != -1)
        printf("\n--->%d<---Poped out from top of stack\n", data);
      break;
    case 3:
      peek();
      break;
    case 4:
      return 0;
    default:
      printf("\t\tChoose correct optn\n");
    }
  }
  return 0;
}
int push(int data) {
  if (isFull() != -1)
    return stack[++pointer] = data;
  printf("Stack is full------XXXXXXXX\n");
  return -1;
}
int pop(void) {
  if (isEmpty() != -1)
    return stack[pointer--];
  printf("Stack is empty ---------XXXXXXXXXXx\n");
  return -1;
}
int isFull(void) {
  if (pointer >= MAX - 1)
    return -1;
  return 0;
}
int isEmpty(void) {
  if (pointer < 0)
    return -1;
  return 0;
}
void peek(void) {
  if (isEmpty() != -1) {
    printf("\t\t--->%d<---\n", stack[pointer]);
    return;
  }
  printf("Its empty \n");
}
