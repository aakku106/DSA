#include<stdio.h>
int main() {
    int a[]={6,8,9,11,1,10,15,16};
    int start=0;
    int k=0;
    int end= sizeof(a)/sizeof(a[0]);
    int mid = (start+end)/2;
    int temp[end];
    int j=mid;
    for (int i=0;i<end;i++) printf("%d\t",a[i]);
    printf("\n");
    while (start<mid && mid<end) {
        if (a[start] <a[j]) {
            temp[k++]=a[start++];

        }else {
            temp[k++]=a[j++];
        }
    }
    while (start<mid) {
        temp[k++]=a[start++];
    }
    while (j<end) {
        temp[k++]=a[j++];
    }

    for (int i=0;i<end;i++) printf("%d\t",temp[i]);
    printf("\n");
}