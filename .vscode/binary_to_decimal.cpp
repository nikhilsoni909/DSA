#include<iostream>

using namespace std;
int binarytodecimal(int n){
int x=1;
int result=0;
while (n>0)
{
    int y=n%10;
    result+=x*y;
    x*=2;
    n/=10;
}

return result;

}
int main()
 {int n;
cout<<"enter a binary number:\n";
cin>>n;
cout<<binarytodecimal(n);
return 0;
}