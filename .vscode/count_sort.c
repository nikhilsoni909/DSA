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
void countsort(int a[], int n)
{
    int i, j;
    int max = maximum(a, n);
    // creating the count array
    int *count = (int *)malloc((max + 1) * sizeof(int));
    int b[n];

    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        ++count[a[i]];
    }
    for (i = 1; i <= max; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    for (i = n - 1; i >= 0; i--)
    {
        b[--count[a[i]]] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}
int main()
{
    int arr[] = {3, 4, 5, 6, 2, 1};
    int n = 6;
    countsort(arr, n);
    // printf("%d ", maximum(arr, n));
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}