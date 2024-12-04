
#include<stdio.h>
int main(){
    printf("How many elements do wu have in array ?\t");
    int numberOfElementsInArray;
    scanf("%d",&numberOfElementsInArray);
    printf("Please enter the numbers in array");
    int array[numberOfElementsInArray];
    for(int input=0;input<numberOfElementsInArray;input++){
        scanf("%d",&array[input]);
    }
    printf("You entered\n");
    for(int withoutShort=0;withoutShort<numberOfElementsInArray;withoutShort++){
        printf("%d\t",array[withoutShort]);
    }
    printf("\n");
    for(int i=0;i<numberOfElementsInArray;i++){
        int minNumberIndexSelect=i;
        for(int j=i+1;j<numberOfElementsInArray;j++){
            if(array[j]<array[minNumberIndexSelect]){
                minNumberIndexSelect=j;
            }
        }
           int temp=array[i];
                array[i]=array[minNumberIndexSelect];
                array[minNumberIndexSelect]=temp;
    }
    printf("shorting array you provided ............\n.............\n...\n..\n");
    for(int slectionShort=0;slectionShort<numberOfElementsInArray;slectionShort++){
        printf("%d\t",array[slectionShort]);
        }
}          
