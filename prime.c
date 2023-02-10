#include<stdio.h>

int isprime(int a){
    for (int i = 2; i*i <=a ; i++)
    {
        if (a%i==0) 
        {
            return 0;
        }
        return 1;
    }
    
 }
int main()
 {
int n1,n2;
printf("enter two numbers:");
scanf("%d",&n1);
scanf("%d",&n2);
printf("two  numbers: are %d %d",n1,n2);
// for (int i = n1; i <= n2; i++)
// {
//     if (isprime(i))
//     {
//         printf("%d",i);
//     }
    
// }

return 0;
}