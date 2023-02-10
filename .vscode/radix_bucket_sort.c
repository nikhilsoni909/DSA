#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int maximum(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
        return max;
    }
}
void countsort(int a[], int n, int pos)
{
    int i, j;

    // creating the count array
    int count[10];
    int b[n];

    for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        ++count[(a[i] / pos) % 10];
    }
    for (i = 1; i <= 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    for (i = n - 1; i >= 0; i--)
    {
        b[--count[((a[i] / pos) % 10)]] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}
void radixsort(int a[], int n)
{
    int max = maximum(a, n);
    int pos;
    for (pos = 1; max / pos > 0; pos *= 10)
    {
        countsort(a, n, pos);
    }
}
int main()
{
    int arr[] = {3234, 245, 522, 6, 22, 134545};
    int n = 6;
    radixsort(arr, n);
    // printf("%d ", maximum(arr, n));
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}