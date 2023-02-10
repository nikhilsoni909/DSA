#include<stdio.h>

int main()
 {
int mark[10];
// int*ptr=&mark[0];
// or
int *ptr=mark;

for(int i=0;i<4;i++){
printf("enter the value of %dst mark ",i+1);
scanf("%d",ptr);
ptr++;
}
for(int i=0;i<4;i++){
printf(" the value of %dst mark is %d \n",i+1,mark[i]);
}
return 0;
}