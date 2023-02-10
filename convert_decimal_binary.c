#include<stdio.h>

int main()
 {int a[100];
 int rem;
 int n;
 printf("enter value:");
  scanf("%d",&n);
int i=0;
if (n==0)
{
    printf("0");
}
else{
 while (n)
 {rem=n%2;
     n=n/2;
     a[i]=rem;
     i++;
 }
 for(int j=i-1;j>=0;j--){

     printf("%d",a[j]);
 }
}
return 0;
}