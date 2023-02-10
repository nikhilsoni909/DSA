#include<stdio.h>
void tentimes(int *a)
{
*a=*a*10;


}
int main()
 { int a=5;
tentimes(&a);
printf("%d",a);
return 0;
}