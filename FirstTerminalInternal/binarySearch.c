#include<stdio.h>
int Search(int arr[],int,int);
void check(int,int);
int main(void){
    int arr[]={1,2,4,6,78,98},
    target=6,len=sizeof(arr)/sizeof(arr[0]),
    result=Search(arr,target,len);
    check(target,result);
    target=106;
    result=Search(arr,target,len);
    check(target,result);
    return 0;
}
int Search(int arr[],int target,int len){
    int low=0,
    high = len-1,
    mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target)
            return mid;
        else if (arr[mid]<target)
            low=mid+1;
        else
            high=mid-1;
    }
    return 404;
}
void check(int target,int result){
    if(result==404)
        printf("\nElement\t%d\twas not in array.\n",target);
    else
        printf("\nElement\t%d\twas in index\t%d.\n",target,result);
}