#include<stdio.h>
int insert(int arr[],int *size,int pos,int data){
for (int  i = *size-1; i>=pos-1 ; i--)
{
    arr[i+1]=arr[i];
}
arr[pos-1]=data;

++*size;
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
printf("enter data\n");
scanf("%d",&data);
printf("enter pos\n");
scanf("%d",&pos);
if (pos<=0||pos>size+1)
{
    printf("invalid position!!!!");
}
else
{
insert(arr,&size,pos,data);
for (int i = 0; i < size; i++)
{
    printf("%d ",arr[i]);
}    
}



return 0;
}