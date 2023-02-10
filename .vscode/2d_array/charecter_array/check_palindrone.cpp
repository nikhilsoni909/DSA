#include<iostream>

using namespace std;

int main()
 {
int n;
cin>>n;
char array[n+1];
cin>>array;
bool check=1;
for (int i = 0; i < n/2; i++)
{
    if (array[i]!=array[n-1-i])
    {
        check=0;
        break;
    }
    
}
if(check){

    cout<<"palindrome";

}
else
{
    cout<<"not palindrome";
}

return 0;
}