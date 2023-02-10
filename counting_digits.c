#include<stdio.h>
int ginti(int n){
static int a;

while (n!=0) 
{
    n=n/10;
    a++;

}




};
int main()
 {int n=12345;
printf("%d\n",ginti(n));
return 0;
}