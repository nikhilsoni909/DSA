#include<iostream>

using namespace std;
bool ispowerof2(int n){
if (n==1||n==0)
{
    return 0;
}

else
return (!(n&(n-1)));


}
int main()
 {

cout<<ispowerof2(16);
return 0;
}