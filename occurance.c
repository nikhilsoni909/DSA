#include <stdio.h>
int occurance(char a[], char l)
{
    char *ptr = a;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == l)
        {
            count++;
            printf("%c found\n", l);
        }
        ptr++;
    }
    return count;
}

int main()
{
    char a[] = "hello";
    int count = occurance(a, 'h');
    printf("%d",count);
    return 0;
}