#include<iostream>
#include<climits>
using namespace std;

int main()
 {int arr[]={1,2,3,4,5,6,7};
 int n=sizeof(arr)/sizeof(arr[0]);
int maxsum=INT_MIN;
 for (int i = 0; i < n; i++)
 {
     for (int j = i; j <n;j++){
         int sum=0;
for (int k = i; k <=j;k++)
{
sum+=arr[k];

}
maxsum=max(maxsum,sum);
     }
 }
 cout<<maxsum<<endl;

return 0;
}