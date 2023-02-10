#include<stdio.h>

int main()
 {FILE*ptr;
 int a;
 printf("enter the number you want table of:\n");
 scanf("%d",&a);
 ptr=fopen("table.txt","w");
for (int i = 0; i < 10; i++)
{
    fprintf(ptr,"%d X %d=%d\n",a,i+1,a*(i+1));
}
fclose(ptr);

return 0;
}