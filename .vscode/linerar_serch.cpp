#include<iostream>

using namespace std;
int linerar_serch(int arr[],int n,int a){
for (int i = 0; i < 5; i++)
{
    if (arr[i] ==a)
    {
        return i;
    }
   
    
}
 
    {
        return -1;
    }

}
int main()
 {int arr[5]={0,1,2,3,4};
 int n=sizeof(arr)/sizeof(arr[0]);
 cout<<linerar_serch(arr,n,5);

return 0;
}