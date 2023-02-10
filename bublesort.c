#include <stdio.h>
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void bsort(int *a, int n)
{
    int i;
    int j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    } }
    void pint(int *a, int n)
    {
        for (int i = 0; i < n; i++)
        {
printf("%d ",a[i]);
        }
        
    }
    int main()
    {int a[]={12,2,3,4,4,5};
int n =sizeof(a)/sizeof(a[0]);
bsort(a,6);
pint(a,6);
        return 0;
    }