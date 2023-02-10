#include<iostream>

using namespace std;

int main()
 {int arr[]={1,2,3,4,5,6,7};
 int n=sizeof(arr)/sizeof(arr[0]);

 for (int i = 0; i < n; i++)
 {
     for (int j = i; j <n;j++){
for (int k = i; k <=j;k++)
{printf("%d ",arr[k]);


}cout<<endl;
     }
 }
 

return 0;
}