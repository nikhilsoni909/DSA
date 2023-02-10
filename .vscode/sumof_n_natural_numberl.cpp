#include<bits/stdc++.h>
using namespace std;
int sum(){int sum=0;int n;
cin>>n;
for (int i = 1; i <= n; i++)
{
    sum+=i;
}
return sum;
}

int main(){

cout<<sum()<<endl;



}