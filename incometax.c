#include<stdio.h>
int main(){
float tax=0,income; 
printf("enter your income \n");
scanf("%f",&income);
if (income>=2500&&income<=5000)
{
    tax=tax+0.05*(income-2500);
}
if (income>=5000&&income<=10000)
{
    tax=tax+0.10*(income-5000);
}
if (income>=10000)
{
    tax=tax+0.20*(income-10000);
}
printf("%f",tax);

return 0;
}



