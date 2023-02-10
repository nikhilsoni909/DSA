#include <stdio.h>
int partion(int a[], int lb, int ub)
{
    int pivat = a[lb];
    int start = lb;
    int end = ub;
    int temp;
    while (start < end)
    {
        while (a[start] <= pivat)
        {
            start++;
        }
        while (a[end] > pivat)
        {
            end--;
        }
        if (start < end)
        {
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
    temp = a[lb];
    a[lb] = a[end];
    a[end] = temp;
    return end;
}
void quicksort(int a[], int lb, int ub)
{
    int lock;
    if (lb < ub)
    {
        lock = partion(a, lb, ub);
        quicksort(a, lb, lock - 1);
        quicksort(a, lock + 1, ub);
    }
}

int main()
{
    int a[] = {23, 23, 4, 1, 3, 4, 5, 3};
    int n = 8;

    quicksort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}