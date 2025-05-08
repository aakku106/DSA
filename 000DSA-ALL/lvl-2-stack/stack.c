#include "stack.h"
#include "../ClearScreen.h"
#include "../color.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int stack[MAX], pointer = -1;

void stack_main_call(void) {
  clear_screen();
  while (106) {
    printf(CRYON
           "\n\n\t\t===============Choose from=======================\n" RESET);
    usleep(50000);
    printf(YELLOW "\t\t1. PUSH\n" RESET);
    usleep(50000);
    printf(YELLOW "\t\t2. POP\n" RESET);
    usleep(50000);
    printf(YELLOW "\t\t3. To Peek\n" RESET);
    usleep(50000);
    printf(CYAN "\t\t4. To exit Stack\n" RESET);
    usleep(50000);
    printf(RED "\t\t0.To exit program\n " RESET);
    int choose, data;
    scanf("%d", &choose);
    switch (choose) {
    case 1:
      printf(CYAN "\n\t\tEnter number to put in stack:\t");
      scanf("%d", &data);
      if (push(data) != -1)
        printf(GREEN "\n\t\t--->%d<---Pushed to stack's top\n", data);
      break;
    case 2:
      data = pop();
      if (data != -1)
        printf(GREEN "\n\t\t--->%d<---Poped out from top of stack\n", data);
      break;
    case 3:
      peek();
      break;
    case 4:
      return;
    case 0:
      exit(0);
    default:
      printf(RED "\t\t ?-?-?---------Choose correct optn-------!-!-!\n" RESET);
    }
  }
  return;
}
int push(int data) {
  if (isFull() != -1)
    return stack[++pointer] = data;
  printf(RED "\n\t\tXXX-----Stack is full------XXX\n" RESET);
  return -1;
}
int pop(void) {
  if (isEmpty() != -1)
    return stack[pointer--];
  printf(RED "\n\t\tXXX-----Stack is empty ---------XXX\n" RESET);
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
    printf(YELLOW "\t\t--->%d<---Will be pooped next !\n", stack[pointer]);
    return;
  }
  printf(RED "\n\t\tXXX----Its empty-----XXX \n" RESET);
}
