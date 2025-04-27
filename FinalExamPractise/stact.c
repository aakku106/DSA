#include <stdio.h>
#include <sys/_types/_sigaltstack.h>
#define MAX 3
int stack[MAX], pop(), push(int), isEmpty(), isFull(), pointer = 0;
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
    return stack[pointer++];
  printf("Stack is full------XXXXXXXX\n");
  return -1;
}
int pop() {
  if (isEmpty() != -1)
    return stack[pointer--];
  printf("Stack is empty ---------XXXXXXXXXXx\n");
  return -1;
}
