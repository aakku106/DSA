#include<stdio.h>
int main(){
int array[]={2,1,4,6,3,9};
int sizeOfArray = sizeof(array)/sizeof(array[0]);
    for(int first=0;first<sizeOfArray;first++)
    {
        printf("%d\t",array[first]);
    }
    printf("\n");
    for(int i=0;i< sizeOfArray;i++){
        int minIndex=i;
        for(int j=i+1;j<sizeOfArray;j++){
            if(array[minIndex]>array[j]){
                minIndex=j;
                int temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
        for(int i=0;i<sizeOfArray;i++){
            printf("%d\t",array[i]);
        }


return 0;
}
