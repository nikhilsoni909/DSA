#include<stdio.h>
void sum_avg(int a,int b,int * sum,float * avg){
*sum=a+b;
*avg=(float)*(sum)/2;//typecasting int to float 




}
int main()
 {int a=4,b=5,sum;
 float avg;
sum_avg(a,b,&sum,&avg);
printf("the sum is %d and average  is %f",sum,avg);
return 0;
}