#include<stdio.h>

int main()
 {
int i=45;
int *a=&i;
int *b=&i;
// printf("%u\n",a);
 *a++;
// printf("%u\n",a);
// printf("%u\n",b);

printf("%u",*a);
return 0;
}