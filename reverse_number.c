#include<stdio.h>
int reverse(int n)
{
int rem ,rev=0;
while (n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;

}
return rev;


}
int main()
 {int num=3458097;
     int rev=reverse(num);
     printf("%d",rev);
return 0;
}