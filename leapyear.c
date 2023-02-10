#include<stdio.h>
int main ()
{
    int a,b;
printf("enter number \n");
scanf("%d",&a);
if (a%4==0&&((a%100!=0)||(a%400==0)))
{
  printf("this is  leap year \n");
 
}
else
{

printf("this is not leap year \n");

}
return 0;


}