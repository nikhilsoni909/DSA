#include<stdio.h>
void print_table(int *arr,int num,int size){
for (int i = 1; i <=size ; i++)
{
arr[i]=num*i;
}
printf("******printing table of %d*****\n",num);
for (int i = 1; i <=size ; i++)
{
printf("%d X %d=%d\n",num,i,arr[i]);
}



}
int main()
 {
int arr [2][10];


print_table(arr[0],7,10);

print_table(arr[1],10,10);
print_table(arr[2],3,10);

return 0;
}