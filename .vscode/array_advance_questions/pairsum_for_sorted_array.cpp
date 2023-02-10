#include<iostream>

using namespace std;
bool pairsum(int *arr,int n,int k){
int low=0;
int high=n-1;
while (low<high) 
{
    if (arr[low]+arr[high]==k)
    {
        cout<<low<<" "<<high<<endl;
        return true;

    }
    else if(arr[low]+arr[high]<k)
    {
        low++;
    }
    else
    {
        high--;
    }
    
}


return false;

}
int main()
 {int arr[]={2,4,7,11,14,16,20,21};
 int k=31;
 int n=8;
 cout<<pairsum(arr,n,k);

return 0;
}