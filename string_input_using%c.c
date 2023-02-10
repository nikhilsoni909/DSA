#include<stdio.h>

int main()
 {
    char a[50];
    char b[50];
    int i=0;
    char c;
printf("enter the value of first string:");
scanf("%s",a);

printf("enter the value of second string:");
// printf("hello ");
while(c!='\n')
{fflush(stdin);
scanf("%c",&c);
b[i]=c;
i++;
}
// b[i]='\0';
b[i-1]='\0';
printf("the value of first string is %s\n",a);
printf("the value of first string is %s\n",b);
printf(" strings are same or not ???%d",strcmp(a,b));

return 0;
}