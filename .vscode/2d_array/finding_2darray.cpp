#include<iostream>

using namespace std;

int main()
 {int n,m;
 cin >> n >> m;
 int arr[n][m];
 int x=3;
 bool check=false;
 for (int i = 0; i < n; i++)
 {
     for (int j = 0; j < m; j++)
     {
         cin >> arr[i][j];
     }
     
 }
 for (int i = 0; i < n; i++)
 {
     for (int j = 0; j < m; j++)
     {
      
         if (arr[i][j]==x)
         {check=true; 
             cout<<i<<" "<<j;
         }
         
         
     }
     cout<<endl;
 }
 
if (check)
{
    printf("element found: ");
}
else
{
    cout<<"not found";
}

return 0;
}