#include <stdio.h>//
int enc(char *a)
{
    char *ptr = a;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int dec(char *a)
{
    char *ptr = a;
    while (*ptr != '\0')
    {
        *ptr = *ptr -       1;
        ptr++;
    }
}
int main()
{
    char a[] = "1 2 3";
    enc(a);
    printf("%s\n", a);
dec(a);
printf("%s\n", a);
    return 0;
}