#include<stdio.h>
int Search(int,int,int arr[]);
void check(int,int);
int main(void){
    int arr[]={10,321,3431,1214,44,3413,12},
    target=44,
    len=sizeof(arr)/sizeof(arr[0]),
    result=Search(len,target,arr);
    check(result,target);
    target=106;
    result=Search(len,target,arr);
    check(result,target);
}
int Search(int len,int target,int arr[]){
    for(int i=0;i<len;i++){
        if(arr[i]==target)
            return i;
    }
    return 404;
}
void check(int result,int target){
    if(result==404)
        printf("\nElement\t%d\twas not in array.\n",target);
    else
    printf("\nElement\t%d\twas in index\t%d.\n",target,result);
}