#include<stdio.h>
// void findpostive(int arr[],int size) this will also work
void findpostive(int* arr,int size)
{
//    static int count;
// or
int count=0;
for (int i = 0; i < size; i++)
{
if (arr[i]>0)
{
count++;
}

}
printf("%d ",count);


}
int main()
 {
int arr[]={1,2,-2,-3,-4,-5,-6,7,-8,-9,-10};
findpostive(arr,11);


return 0;
}