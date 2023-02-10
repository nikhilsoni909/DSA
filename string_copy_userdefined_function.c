#include <stdio.h>
void strc(char *b, char *a)
{
    int i = 0;
    while (a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
}
int main()
{
    char a[] = "hello";
    char b[50];
    strc(b, a);
    printf("%s", b);
    return 0;
}