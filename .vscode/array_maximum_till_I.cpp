#include<iostream>
#include<climits>
using namespace std;

int main()
 {int arr[5]={5,-1,-3,-2,6};
 int max_arr=INT_MIN;
for (int i = 0; i < 5; i++)
{
    max_arr=max(max_arr,arr[i]);
    cout<<max_arr<<endl;
}

return 0;
}