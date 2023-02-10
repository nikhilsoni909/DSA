#include<stdio.h>
int delete(int arr[],int *size,int pos){
for (int  i = pos-1; i<*size-1 ; i++)
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

printf("enter pos\n");
scanf("%d",&pos);
if (pos<=0||pos>size+1)
{
    printf("invalid position!!!!");
}
else
{
delete(arr,&size, pos);
for (int i = 0; i < size; i++)
{
    printf("%d ",arr[i]);
}    
}





return 0;
}