#include <stdio.h>
 void printarray(int a[100][100], int r, int c)//this will aslo work
// void printarray(int *a, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter element %d,%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{int arr[100][100];
    int r, c;
    printf("enter the value of row and column :\n");
    scanf("%d%d",&r,&c);
    printarray(arr,r,c);

    return 0;
}