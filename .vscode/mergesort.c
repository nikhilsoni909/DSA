#include <stdio.h>

void merge(int a[], int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int b[100];
    while (i <= mid && j <= ub)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    while (j <= ub)
    {
        b[k] = a[j];
        j++;
        k++;
    }

    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    for (i = lb; i <= ub; i++)
    {
        a[i] = b[i];
    }
}
void mergesort(int arr[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        mergesort(arr, lb, mid);
        mergesort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}
int main()
{
    int a[] = {23, 23, 4, 1, 3, 4, 5, 3};
    int n = 8;

    mergesort(a, 0, n - 1);

    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}