#include <stdio.h>

int main()
{
    int a, c, b, d;

    printf("enter 4num\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a >= b)
    {
        if (a >= c)
        {
            if (a >= d)
            {
                printf("%d is greatest \n", a);
            }
            else
                printf("%d is greatest \n", d);
        }
    }
    else if (b >= c)
    {
        if (b >= d)
        {
            printf("%d is greatest \n", b);
        }
        else
            printf("%d is greatest \n", d);
    }

else if (c >= d)
{
    printf("%d is greatest \n", c);
}
else
 printf("%d is greatest \n", d);
return 0;
}