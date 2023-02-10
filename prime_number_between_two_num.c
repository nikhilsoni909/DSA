#include<stdio.h>

int isprime(int a){
    for (int i = 2; i*i <=a ; i++)
    {
        if (a%i==0) 
        {
            return 0;
        }
       
    }
     return 1;
 }
int main()
 {
int i, n1,n2;
printf("enter two numbers:");
scanf("%d",&n1);
printf("enter second number\n");
scanf("%d",&n2);
printf("all the odd number between  %d %d are",n1,n2);

for ( i = n1; i <=n2; i++)
{
    if (isprime(i))
    {
        printf("%d ",i);
    }
    
}


return 0;
}