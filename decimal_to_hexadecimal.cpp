#include<iostream>

using namespace std;
string decimaltobinary(int n){
int x=1;
string ans="";
while (x<=n) 
{
    x*=16;
  
}
x/=16;
while (x>0)
{
    int lastdigit=n/x;
    n-=x*lastdigit;
    x/=16;
    if (lastdigit<=9)
    {
        ans=ans + to_string(lastdigit);
    }
    else{
char c='A'+lastdigit-10;
ans.push_back(c);
    }
    
}



return ans;
}
int main()
 {
int n;
cout<<"enter a decimal number\n";
cin>>n;
cout<<decimaltobinary(n);
return 0;
}