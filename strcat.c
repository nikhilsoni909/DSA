#include<stdio.h>
#include<string.h>
int main()
 {
char a[50]="hello ";
char *b="world";
strcat(a,b);//combine targeted string to another string
printf("%s",a);
return 0;
}