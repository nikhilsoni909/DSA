#include<stdio.h>
int factorial(int n){
    int a=1;
for (int i = n; i > 1; i--)
{
 a=a*i;   
}
return a;



}
int main()
 {
int a=5;
printf("%d",factorial(a));
return 0;
}