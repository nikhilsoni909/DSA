#include<stdio.h>

int main()
 { int i,j,r,x,a[100][100],b[100][100],c[100][100];
 printf("enter the value of row and columb \n");
 scanf("%d%d",&a,&x);
 printf("enter the value of first matarix\n");
for ( i = 0; i < r; i++)
{
    for ( j = 0; j < x; j++)
    {
    
        printf("enter the value of %d row and %d column",i+1,j+1);
   scanf("%d",&a[i][j]);
    }
    
}

return 0;
}