#include <stdio.h>
#include<stdbool.h>
int main(void) {

    int numbers[]={1,2,3,4,5};
    int low=0,high=4;
    int mid = (low+high)/2;
    bool outOfIndex=false;
    printf("EEnter the number to search");
          int numberToSearch;
    scanf("%d", &numberToSearch);

    while(low<=high){
        if(numberToSearch==numbers[mid]){
            printf("the num is found in index\t%d",mid);
            outOfIndex=true;
            break;
        } else if(numberToSearch<numbers[mid]){
            high=mid-1;
        } else {
            low=mid+1;
        }
mid=(low+high)/2;

    };
    if(outOfIndex==false){
        printf("Out of index");
    }






    return 0;
}
