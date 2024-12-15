
#include <stdio.h>

void sort(int* a,int length) {
    int start=0;
    int end=length;
    int mid=(start+end)/2;
    int j=mid;
    int temp[length];
    int i=0;
    while (start<mid&&j<end) {
        if (a[start]>a[j]) {
            temp[i]=a[j];
            i++; j++;
        }
        else if (a[start]<a[j]){
            temp[i]=a[start];
            i++; start++;
        }
    }
    while (start<mid) {
        temp[i++]=a[start++];
    }
    while (j<end) {
        temp[i++]=a[j++];
    }


    for (int k=0;k<length;k++)
        printf("%d\t",temp[k]);

}
int main() {
    int a[]={6,8,9,16,1,10,11,15};
    int size=sizeof(a)/sizeof(a[0]);
    sort(a,size);
    return 0;
}