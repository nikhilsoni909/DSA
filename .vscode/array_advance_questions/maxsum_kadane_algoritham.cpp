#include<iostream>

using namespace std;

int main()
 {
int arr[]={1,2,-4,4,-23,-1,7};
int n=sizeof(arr)/sizeof(arr[0]);
int currentsum=0;
int maxsum=INT_MIN;
for (int i = 0; i < n; i++)
{
    currentsum+=arr[i];
    if (currentsum<0)
    {
        currentsum=0;
    }
    maxsum=max(maxsum,currentsum);
}
cout<<maxsum<<endl;
}