#include<stdio.h>
#include<string.h>
int main()
 {
char a[]="hellooooo world";//doesnt include the null charecter
// int length=strlen(a);
// printf("%d\n",length);
int i=0, length=0;
while (a[i]!='\0')
{
    i++;
    length++;
}
 printf("%d\n",length);
return 0;
}