#include<iostream>
#include<climits>
using namespace std;

int main()
 {int n;
 cout<<"enter size of array"<<endl;
 cin>>n;
int arr[n];
cout<<"enter\n";
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    cout<<" "<<arr[i];
}
int maxnum = INT_MIN;
int minnum=INT_MAX;
// for (int i = 0; i < n; i++)
// {
//     if (arr[i] > maxnum)
//     {
//         maxnum=arr[i];
//     }
//       if (arr[i] < minnum)
//     {
//         minnum=arr[i];
//     }
    
// }
// or
for (int i = 0; i < n; i++){

    maxnum=max(arr[i],maxnum);
    minnum=min(arr[i],minnum);
}
cout<<"max: "<<maxnum<<endl<<"min: "<<minnum<<endl;
return 0;
}