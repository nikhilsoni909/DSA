#include<stdio.h>
int main(){
char c;
printf("enter a charecter for checking it is a lower  case or not \n");
scanf("%c",&c);
if (c<=122 && c>=97)
{
   printf("it is lowercase charecter\n");
}
else
{
printf("it is a not lowercase \n");


}
return 0;
}