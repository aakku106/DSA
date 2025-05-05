#include <stdio.h>
#include <stdlib.h>
void callocc();
void main() {
  int n, i;
  float *p, sum = 0, avg;
  printf("how many subjects: \t");
  scanf("%d", &n);
  p = (float *)malloc(n * sizeof(float));
  printf("\n Enter the marks of each subject: \n");
  for (i = 0; i < n; i++) {
    scanf("%f", p + i);
    sum = sum + *(p + i);
  }
  avg = sum / n;
  printf("sum= %.2f & avg= %.2f\n", sum, avg);
  free(p);
  callocc();
}
void callocc() {
  int n, i;
  float *p, sum = 0, avg;
  printf("how many subjects: \t");
  scanf("%d", &n);
  p = (float *)calloc(n, sizeof(float));
  printf("\n Enter the marks of each subject: \n");
  for (i = 0; i < n; i++) {
    scanf("%f", p + i);
    sum = sum + *(p + i);
  }
  printf("sum= %.2f & avg= %.2f\n", sum, avg);
  free(p);
}
