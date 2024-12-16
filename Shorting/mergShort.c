//
// #include <stdio.h>
//
// void sort(int *a, int start, int mid, int end)
// {
//     int size = end - start;
//     int j = mid;
//     int s = start;
//     int temp[size];
//     int k = 0;
//     while (start < mid && j < end)
//     {
//         if (a[start] > a[j])
//         {
//
//             temp[k++] = a[j++];
//         }
//         else if (a[start] < a[j])
//         {
//             temp[k++] = a[j++];
//         }
//     }
//     while (start < mid)
//     {
//         temp[k++] = a[start++];
//     }
//     while (j < end)
//     {
//         temp[k++] = a[j++];
//     }
//
//     for (int i = 0; i < size;)
//     {
//         a[s++] = temp[i++];
//     }
// }
//
// void mergeShort(int a[], int start, int end)
// {
//     if (start < end)
//     {
//         int mid = (start = end) / 2;
//         mergeShort(a, start, mid);
//         mergeShort(a, mid + 1, end);
//         sort(a, start, mid, end);
//     }
// }
// int main()
// {
//     int a[] = {4, 2, 6, 5, 8, 1};
//     int size = sizeof(a) / sizeof(a[0]);
//     // sort(a, 0, mid, size - 1);
//     mergeShort(a,0,size-1);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d\t", a[i]);
//     }
//     // niraj bhattrai
//
//     return 0;
// }

#include <stdio.h>

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }

    while (i < n1)
    {
        arr[k++] = L[i++];
    }

    while (j < n2)
    {
        arr[k++] = R[j++];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (r + l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int size)
{
    // int i;
    for (int i = 0; i < size;)
        printf("%d ", arr[i++]);
    printf("\n");
}

int main()
{
    int arr[] = {4, 7, 2, 5, 1, 9, 8, 6, 3};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}