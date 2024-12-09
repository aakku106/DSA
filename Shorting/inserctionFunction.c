#include <stdio.h>

int getArr(int *);
int sortArr(int[]);
int main()
{
    int lenArr;
    int arr = getArr(&lenArr);
    sortArr(arr);
}
getArr(int *lenArr)
{
    printf("How many elements do we have in array ?\t");
    // int lenArr;
    scanf("%d", &lenArr);
    int arr[*lenArr];
    for (int i = 0; i < lenArr; i++)
    {
        printf("Enter the elements in array\n");
        scanf("%d", arr[i]);
    }
    return arr;
}
sortArr(int arr[])
{
}
