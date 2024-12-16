
#include <stdio.h>

void sort(int *a, int start, int mid, int end)
{
    int size = end - start;
    int j = mid;
    int s = start;
    int temp[size];
    int k = 0;
    while (start < mid && j < end)
    {
        if (a[start] > a[j])
        {
            temp[k++] = a[j++];
        }
        else if (a[start] < a[j])
        {
            temp[k++] = a[j++];
        }
    }
    while (start < mid)
    {
        temp[k++] = a[start++];
    }
    while (j < end)
    {
        temp[k++] = a[j++];
    }

    for (int i = 0; i < size;)
    {
        a[s++] = temp[i++];
    }
}
int main()
{
    int a[] = {4, 2, 6, 5, 8, 1};
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    int size = sizeof(a) / sizeof(a[0]);
    sort(a, 2, 3, 4);
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    // niraj bhattrai

    return 0;
}