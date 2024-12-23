#include <stdio.h>
void concure(int arr[], int si, int mi, int ei)
{
    int size=ei-si+1;
    int merged[size];
    int ind1 = si,
        ind2 = mi + 1,
        x = 0;
    while (ind1 <= mi && ind2 <= ei)
    {
        if (arr[ind1] <= arr[ind2])
        {
            merged[x++] = arr[ind1++];
        }
        else
        {
            merged[x++] = arr[ind2++];
        }
    }
    while (ind1 <= mi)
    {
        merged[x++] = arr[ind1++];
    }
    while (ind2 <= ei)
    {
        merged[x++] = arr[ind2++];
    }
    for (int i = 0, j = si; i < size;)
    {
        arr[j++] = merged[i++];
    }
}
void divide(int arr[], int si, int ei)
{
    if (si >= ei)
        return;
    int mi = si + (ei - si) / 2;
    divide(arr, si, mi);
    divide(arr, mi + 1, ei);
    concure(arr, si, mi, ei);
}
int main()
{
    int arr[] = {6, 3, 9, 5, 2, 8,0,21,12,33,43,53,2323,90};
    int si = 0;
    int len = (sizeof(arr) / sizeof(arr[0])) - 1;

    for (int i = 0; i <= len;)
    {
        printf("%d\t", arr[i++]);
    }

    printf("\n");
    divide(arr, si, len);
    for (int i = 0; i <= len;)
    {
        printf("%d\t", arr[i++]);
    }
    printf("\n");
}
