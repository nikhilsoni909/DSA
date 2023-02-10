#include<stdio.h>
#include<string.h>
int main()
 {
char a[50]="hello ";
char *b="world";
int val =strcmp(a,b);//if it return negative value means the auscii value of first diffrent charecter of first string is less than the auscii value of the second one 
// if it returns 0 means there is no different charecter in string means strings are same
//  if returns1 means auscii value of second is bigger  
printf("%d",val);
return 0;
}