#include<stdio.h>

int main()
 {
int isprime=1;
int num;
printf("enter the number:\n");
scanf("%d",&num);
for (int i = 2;i*i <= num; i++)
{
    if (num%i==0)
    {
        isprime=0;
    }
    
}
if (isprime)
{
    printf("number is prime");
}
else
printf("number is not prime");
return 0;
}