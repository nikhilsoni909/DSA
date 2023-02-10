#include<stdio.h>

int main()
 {
char a[]="hello bro";
// char *ptr=&a[0];
char* ptr=a;//it will point to the first element 
/*
printf("%u \n",ptr);
printf("%c \n",*ptr);
ptr++;
printf("%u \n",ptr);
printf("%c \n",*ptr);*/
while (*ptr!='\0')
{
    printf("%c",*ptr);
   ptr++;
}

return 0;
}