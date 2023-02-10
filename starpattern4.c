#include <stdio.h>

int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
        
    {
        for (int j = 0; j < n * 2; j++)
        {
            if (j >= n - 1 - i && j <= n - 1 + i)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}