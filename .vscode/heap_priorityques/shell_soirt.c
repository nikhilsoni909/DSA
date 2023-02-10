#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int gap, i, j;
    int a[] = {3, 23, 5, 6, 72, 54, 87, 2};
    int n = 8;

    for (gap = n / 2; gap >= 1; gap /= 2)
    {
        for (int j = gap; j < n; j++)
        {
            for (int i = j - gap; i >= 0; i -= gap)
            {
                if (a[i + gap] > a[i])
                {
                    break;
                }
                else
                {
                    swap(&a[i + gap], &a[i]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}