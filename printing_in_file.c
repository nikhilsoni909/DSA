#include<stdio.h>

int main()
 {int n,m;
 char name1[20],name2[20];
printf("enter two names");
scanf("%s%s",name1,name2);
printf("enter num of first and second man");
scanf("%d%d",&n,&m);
FILE*ptr;
ptr=fopen("hello.txt","w");
fprintf(ptr,"%s ,%d\n %s,%d",name1,n,name2,m);
return 0;
}