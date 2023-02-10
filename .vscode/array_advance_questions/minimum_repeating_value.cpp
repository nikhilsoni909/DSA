#include<bits/stdc++.h>
using namespace std;

int main()
 {int n;
 cout<<"enter the size\n";
 cin >> n;
 int arr[n];
 cout<<"enter elements\n";
 for (int i = 0; i < n; i++)
 {
     cin>>arr[i];
 }
 const int N=100; 
 int idx[N];    
for (int i = 0; i < N; i++)
{
     idx[i]=-1;
}
int minindx=INT_MAX;
for (int i = 0; i < n; i++)
{
    if (idx[arr[i]]!=-1)
    {
        minindx=min(minindx,idx[arr[i]]);
    }
    else
    {
        idx[arr[i]]=i;
    }
    
     
}

if (minindx==INT_MAX)
{
        cout<<"-1"<<endl;
}
else
{
    cout<<minindx+1<<endl;
}

return 0;
}