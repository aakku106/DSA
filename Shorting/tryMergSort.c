#include <stdio.h>
void concur(int a[], int start, int mid, int end);

void divide(int a[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        divide(a, left, mid);
        divide(a, mid + 1, right);
        concur(a, left, mid, right);
    }
}
void concur(int a[], int start, int mid, int end)
{

    int temp[end - start];
    int size = end - start;
    int s = start;
    int m = mid;
    int e = end;
    int k = 0;
    while (s <= m && m < e)
    {
        if (a[s] < a[m])
        {
            temp[k++] = a[m++];
        }
        else
        {
            temp[k++] = a[s++];
        }
    }
    while (start < mid)
    {
        temp[k++] = a[start++];
    }
    while (m < end)
    {
        temp[k++] = a[m++];
    }

    // for (int i = 0; i < size;)
    // {
    //     a[size++] = temp[i++];
    // }

    // printf("\n");
    // for (int i = 0; i < 9;)
    // {
    //     printf("%d\t", temp[i++]);
    // }
    // printf("\n");
}

int main(void)
{
    int a[] = {4, 7, 2, 5, 1, 9, 8, 6, 3};
    printf("\n");

    for (int i = 0; i < 9;)
    {
        printf("%d\t", a[i++]);
    }
    printf("\n");

    divide(a, 0, 8);
    for (int i = 0; i < 9;)
    {
        printf("%d\t", a[i++]);
    }
    return 0;
}
