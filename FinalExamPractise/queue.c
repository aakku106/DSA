#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = 0, rear = -1;
int InQueue(int);
int DeQueue();
int IsFull();
int IsEmpty();
int peek();
void show();
int main() {
  show();
  InQueue(1);
  show();
  InQueue(2);
  show();
  InQueue(3);
  show();
  InQueue(4);
  show();
  InQueue(5);
  show();
  InQueue(5); // shall throw error
  DeQueue();  // 0
  show();
  DeQueue(); // 1
  show();
  DeQueue(); // 2
  show();
  DeQueue(); // 3
  show();
  DeQueue(); // 4
  show();
  DeQueue(); // 5  shall see error here queue is empty
  peek();    // shall say its empty

  // we can also do
  printf("InQueueing\t%d\n%d\n", InQueue(106),
         peek()); // no need to call show function to see whats going on
  printf("InQueueing\t%d\n", InQueue(108));
  printf("InQueueing\t%d\n", InQueue(107));
  printf("InQueueing\t%d\n", InQueue(109));
  printf("InQueueing\t%d\n", InQueue(101));
  printf("InQueueing\t%d\n", InQueue(1010)); // It says Enqueuing 1 because we
                                             // returned -1 in IsFull function
  printf("DeQueueing\t%d\n", DeQueue());
  printf("DeQueueing\t%d\n", DeQueue());
  printf("DeQueueing\t%d\n", DeQueue());
  printf("DeQueueing\t%d\n", DeQueue());
  printf("DeQueueing\t%d\n", DeQueue());
  printf("DeQueueing\t%d\n", DeQueue());
  printf("InQueueing\t%d\n", InQueue(103));
  printf("DeQueueing\t%d\n", DeQueue());
  printf("InQueueing\t%d\n", InQueue(1));
  printf("InQueueing\t%d\n", InQueue(12));
  printf("InQueueing\t%d\n", InQueue(13));
  printf("InQueueing\t%d\n", InQueue(14));
  printf("InQueueing\t%d\n", InQueue(15));
  printf("InQueueing\t%d\n", InQueue(19));
  printf("peeking\t%d\n", peek());
  printf("DeQueueing\t%d\n", DeQueue());
  show();

  return 0;
}

int InQueue(int data) {
  if (IsFull() == 0)
    return queue[++rear] = data;
  printf("\t\tqueue is Full\t\n");
  return -1;
}
int DeQueue() {
  if (IsEmpty()) {
    printf("\t\tQueue is Empty\t\n");
    return -1;
  }
  int removed = queue[front++];

  // Reset queue when empty
  if (front > rear) {
    front = 0;
    rear = -1;
  }
  return removed;
}

int peek() {
  if (IsEmpty() == 0)
    return queue[front];
  printf("\t\tQueue is Empty\t\n");
  return -1;
}
int IsFull() {
  if (rear >= MAX - 1) {
    return -1;
  }
  return 0;
}
int IsEmpty() {
  if (rear < 0) {
    return -1;
  }
  return 0;
}
void show() {
  printf("\nQueue: ");
  if (IsEmpty()) {
    printf("Empty\n");
    return;
  }
  for (int i = front; i <= rear; i++) {
    printf("%d ", queue[i]);
  }
  printf("\n");
}
