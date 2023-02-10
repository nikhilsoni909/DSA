#include<iostream>

using namespace std;
int fac(int n){int sum=1;
for (int i = 2; i <=n; i++)
 {
        sum*=i;
    }
return(sum);
}

int main()
 {int n=5;
 for (int i = 0; i <n; i++)
 {
     for (int j=0;j<= i; j++)
     {
         cout<<fac(i)/(fac(j)*fac(i-j))<<" ";
     }
     cout<<endl;
 }
 



return 0;}