#include <stdio.h>

int main()
{
    int a[] = {23, 23, 4, 1, 3, 4, 5, 3};
    int n = 8;
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}