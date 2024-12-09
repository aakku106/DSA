#include <stdio.h>
int main()
{
    int arr[] = {90, 2, 9, 2, 44, 6, 3};
    int lenArr = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < lenArr; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (arr[j] > key && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        };
        arr[j + 1] = key;
    }
    for (int i = 0; i < lenArr; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
