#include <stdio.h>
int sum(int n) {
    if (n==0|| n>=10) {return n;}
    printf("%d\t",n);
    return sum(n+2);
}
int main() {
    printf("%d\t",sum(1));
    printf("\n");
    sum((1));
    return 0;
}