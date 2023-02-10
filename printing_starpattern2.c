#include<stdio.h>

int main()
 {int  n=5;
for(int i=0;i<n;i++){
for(int j=0;j<n-i;j++)
// for(int j=i;j<n;j++) both will work fine
{
    printf("*");
}
printf("\n");
}
return 0;
}