#include <stdio.h>
// void recurtion() {
//     printf("recursion\n");
//     recurtion();
// }
// int sum(int n) {
//     if (n==1) {
//         return 1;
//     }
//     return n*sum(n-1);
// }
int fibo(int n) {
    if (n==0||n==1) {
        return n;
    }
    // printf("%d\t",n);

    return fibo(n-1)+fibo(n-2);
}
int main(void) {

    // printf("recurtion\t%d",sum(1));
    // recurtion();

    for (int i=0;i<10;i++)
    printf("\t%d",fibo(i));
}