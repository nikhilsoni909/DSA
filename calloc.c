#include<stdio.h>
#include<stdlib.h>
int main()
 {int n;
printf("enter the num:\n");
scanf("%d",&n);
int *p=(int*)calloc(n,sizeof(int));
for (int i = 0; i < n; i++)
{printf("enter value\n");

    scanf("%d",&p[i]);

}
for (int i = 0; i < n; i++)
{
    printf("%d \n",p[i]);
    
}
return 0;
}