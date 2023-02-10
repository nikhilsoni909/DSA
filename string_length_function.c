#include<stdio.h>
int strl(char*ptr)
{int i=0,count=0;
while (*ptr!='\0')
{
    ptr++;
    i++;
    count++;
}
return count;


}
int main()
 {
char c[]="hello world";
printf("%d",strl(c));
return 0;
}