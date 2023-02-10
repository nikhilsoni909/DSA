#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
 { int number,guess,guess_num =1;
srand(time(0));
number=rand()%100+1;
printf("the number is %d\n",number);
printf("\n******welcome to my game of gaussing the number******  :\n");

do
{printf("enter the number between 1 to 100 :\n");
scanf("%d",&guess);
 if (guess>number)
 {
     printf("try something smaller\n");
 }
 else if (guess<number)
 {
  printf("try something larger \n");
 }
else
{
printf("you got the number in %d attamps ,champ :\n",guess_num);

}  
guess_num++;
} while (guess!=number);

return 0;
}