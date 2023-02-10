#include<iostream>

using namespace std;
int iter(int n){
int sum=1;
for (int i = 2; i <=n; i++)
 {
        sum*=i;
    }
return(sum);
   
    
}
int main()
 {
int n=4;
cout<<iter(4);

return 0;
}