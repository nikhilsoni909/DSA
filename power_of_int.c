#include<stdio.h>
long long int power(int a,int b){
    int n=1;
for (int  i = 1; i <= b; i++)
{
    n=n*a;
}

return n;


}
int main()
 {
int a=20;
int b=2;
printf("%lld",power(a,b));
return 0;
}