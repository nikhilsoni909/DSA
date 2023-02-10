#include<iostream>

using namespace std;
int octeltodecimal(int n){
int x=1;
int result=0;
while (n>0)
{
    int y=n%10;
    result+=x*y;
    x*=8;
    n/=10;
}

return result;

}
int main()
 {int n;
cout<<"enter a octel number:\n";
cin>>n;
cout<<octeltodecimal(n);
return 0;
}