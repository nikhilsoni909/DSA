#include <stdio.h>
void print_table(int *a, int r, int c, int num) //this will aslo work
// void printarray(int *a, int r, int c)
{
    for (int i = 1; i <= r; i++)

    {
        a[i] = num * i;
    }

    printf("********\n\n");
    for (int i = 1; i <= r; i++)
    {

        printf(" %d X %d=%d \n", num, i, a[i]);
    }
}
int main()
{
    int a[100][100];

    int num[10], c, r;
    printf("enter the number of tables:\n");
    scanf("%d", &c);

    printf("enter the size of table:\n");
    scanf("%d", &r);
    for (int i = 0; i < c; i++)
    {
        printf("enter the integer to print table %d:\n", i + 1);
        scanf("%d", &num[i]);
        
    }
for (int i = 0; i < c; i++)
    {
        print_table(a[i], r, c, num[i]);
    }
    return 0;
}
