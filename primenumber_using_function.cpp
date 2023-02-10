#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int a){

    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a%i==0) 
        {
            return false;
        }
       
    }
     return true;
}

int main()
{int n=10,m=30;
for (int i = n; i <=m; i++)
{
    if (isprime(i))
    {
        cout<<i<<endl;
    }
    
}



    return 0;
}