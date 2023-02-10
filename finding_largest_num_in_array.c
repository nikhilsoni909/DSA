#include<stdio.h>
int highest(int *arr,int n){
int a=0;
for (int i = 0; i < n; i++)
{
    if (a<arr[i])
{
    a=arr[i];
}

}

return a;


}
int main()
 {
int arr[]={1,2,3,4,10,5};
int n= sizeof(arr)/sizeof(arr[0]);
printf("%d",highest(arr,n));
return 0;
}