#include<iostream>
#include<climits>
using namespace std;

int main()
 {int arr[]={1,-4,3,2,1};
int n=sizeof(arr)/sizeof(arr[0]);
int currsum[n+1];
currsum[0]=0;
for (int i = 1; i <= n; i++)
{
    currsum[i]=currsum[i-1]+arr[i-1];
}
int maxsum=INT_MIN;

for (int i = 1; i <= n; i++)
{
int sum=0;
for (int j = 0; j < i; j++)
{
    sum=currsum[i]-currsum[j];
    maxsum=max(maxsum,sum);
}

}
cout<<maxsum<<endl;
return 0;
}