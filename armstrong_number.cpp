#include<iostream>
#include<cmath>

using namespace std;
int main(){
int n=15;
int a=n;
int sum=0;
while (a>0)
{int lastdigit=a%10;
sum+=pow(lastdigit,3);
  a=  a/10;
}
if (sum==n)
{cout<<"armstrong number";
    /* code */
}
else
cout<<"not armstrong";

    return 0;
}