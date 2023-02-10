#include <stdio.h>

int main()
{
    int student = 3;
    int subject = 5;
    int arr[3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("enter the value of %dst student ,subject %d:", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" the value of %dst student ,subject %d is:%d\n", i + 1, j + 1, arr[i][j]);
        }
    }

    return 0;
}