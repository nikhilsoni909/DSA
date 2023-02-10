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
    int minindex;
    int i;
    int j;

    for (i = 0; i < n - 1; i++)
    {
      minindex=i;
      for ( j = i+1; j < n; j++)
      {
          
          if (a[j]<a[minindex])
          {
           minindex=j;   
          }
          swap(&a[minindex],&a[i]);
      }
      

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