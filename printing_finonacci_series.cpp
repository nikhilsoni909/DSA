#include<iostream>
using namespace std;
int fib(int n){
int a1=0;
int a2=1;
int nextvalue;
for (int i = 1; i <=n; i++)
{
    cout<<a1<<endl;
    nextvalue=a1+a2;
    a1=a2;

    a2=nextvalue;

}


return 0;

}
int main()
 {int n=5;
fib(n);


return 0;
}