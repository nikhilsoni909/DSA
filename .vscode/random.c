#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int as(int *arr)
{
}
int main()
{
    int n;
    scanf("%d", &n);

    int *arr = calloc(n, sizeof(int));
    // *(arr + 1) = 3;
    arr[1] = 3;
    printf("%d", arr[1]);

    return 0;
}