#include<stdio.h>
#include<stdlib.h>
int main()
 {
int *p=(int*)malloc(5*sizeof(int));
for (int i = 0; i < 5; i++)
{printf("enter value\n");

    scanf("%d",&p[i]);

}
for (int i = 0; i < 5; i++)
{
    printf("%d \n",p[i]);
    
}
p=realloc(p,10*sizeof(int));
for (int i = 0; i < 10; i++)
{printf("enter value\n");

    scanf("%d",&p[i]);

}
for (int i = 0; i < 10; i++)
{
    printf("%d \n",p[i]);
    
}

return 0;
}