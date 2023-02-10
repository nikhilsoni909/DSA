#include<iostream>

using namespace std;
int iter(int n){
int sum=1;
for (int i = 2; i <=n; i++)
 {
        sum*=i;
    }
return(sum);
   
    
}
int main()
 {
int n,r;
cin>>n>>r;
int res=iter(n)/(iter(r)*iter(n-r));
cout<<res;
return 0;
}