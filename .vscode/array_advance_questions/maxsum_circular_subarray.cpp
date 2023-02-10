#include<iostream>
#include<limits.h>
using namespace std;
int kadane(int arr[],int n){
int maxsum=INT_MIN;
    int currentsum = 0;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        if (currentsum<0)
        {
            currentsum = 0;
        }
        maxsum=max(maxsum,currentsum);
    }
    return maxsum; 
}
int main()
 {int arr[]={4,-4,6,-6,10,-11,12};
 int n=sizeof(arr)/sizeof(arr[0]);
int wrapsum;
int nonwrapsum;
nonwrapsum=kadane(arr,n);

int totalsum=0;
for (int i = 0; i < n; i++)
{
    totalsum += arr[i];
arr[i]=-arr[i];     
}
wrapsum=totalsum+kadane(arr,n);
cout<<max(wrapsum,nonwrapsum);
return 0;
}