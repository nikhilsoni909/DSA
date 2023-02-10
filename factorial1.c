#include<stdio.h>
int fac(int n ){
if (n<=1)
{
    return 1;
}
else
{
    return (n*fac(n-1));
}




}

int main()
{
int n =5;
printf("%d",fac(5));
return 0;
}