#include <stdio.h>
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void sort(int *a, int n)
{
    int key;
    int i;
    int j;

    for (i = 0; i <= n - 1; i++)
    {
        key=a[i];
        j=i-1;
while (j>=0&&a[j]>key)
{
    a[j+1]=a[j];
j--;
}

    a[j+1]=key;  

    }
    
}
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
sort(a,n);
pint(a,n);
        return 0;
    }