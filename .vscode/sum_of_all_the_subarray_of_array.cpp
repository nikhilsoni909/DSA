#include<iostream>

using namespace std;

int main()
 {
int arr[]={1,2,0,7,2};
int n=sizeof(arr)/sizeof(arr[0]);
int current = 0;
for (int i = 0; i < n; i++)
{
    current=0;
for (int j = i; j <n;j++){

    current+=arr[j];
                cout<<current<<endl;
}

}

return 0;
}