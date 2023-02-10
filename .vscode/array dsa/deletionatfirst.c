#include<stdio.h>
int delete(int arr[],int *size){
for (int  i = 0; i<*size-1 ; i++)
{
    arr[i]=arr[i+1];
}


--*size;
return 0;
}
int main()
 {
int arr[20] ,size,data,pos;
printf("enter size of array\n");
scanf("%d",&size);
printf("enter %d elements in array\n",size);
for (int i = 0; i < size; i++)
{
    scanf("%d",&arr[i]);
}
for (int i = 0; i < size; i++)
{
    printf("%d ",arr[i]);
}

printf("\n");
printf("deleted *****\n");
delete(arr,&size);
for (int i = 0; i < size; i++)
{
    printf("%d ",arr[i]);
}    






return 0;
}