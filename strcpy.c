#include<stdio.h>
#include<string.h>
int main()
 {
char *a="hello ";
char b[50];
strcpy(b,a);//copies targeted string to another string
printf("%s",b);
return 0;
}