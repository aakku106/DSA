#include<stdio.h>
void sort(int  array[],int lenArray){
     for(int i=0;i<lenArray  ;i++){
        for(int j=0;j<lenArray-1;j++){
            if( array[j]> array[j+1]){
                int  temp = array[j];
                  array[j]=array[j+1];
                 array[j+1]=  temp;
            }
        }
    }   
}
int main(){
int array[]={9,4,2,12,31213,5,7,8};
    int lenArray=sizeof(array)/sizeof(array[0]);
for (int i = 0; i < lenArray; i++)
{
    printf("%d\t", array[i]);
}
printf("\n");
    sort( array,lenArray);
    for(int i=0;i<lenArray;i++){
        printf("%d\t",array[i]);}
    return 0;
}

