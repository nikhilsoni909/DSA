#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n=13;
bool b=0;
 for(int i=2;i<= sqrt(n); i++)
{
if (n%i==0)
{
    cout<<"not prime";
    b=1;
    break;
}
}
if (b==0)
{
    cout<<" prime";
}


return 0;
}