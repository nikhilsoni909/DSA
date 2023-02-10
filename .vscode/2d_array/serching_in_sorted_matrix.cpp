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
 int r=0,c=m-1;
 while (r<n&&c>=0)
 {
    if (arr[r][c]==x)
    {
        cout<<r<<" "<<c<<endl;
        check=true;
    }
     if (arr[r][c]>x){
c--;

    }
    else
    {
        r++;
    }
    
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