#include<stdio.h>

int main()
 {
char arr[100];
printf("enter your name:");
// scanf("%s",arr);//unable to print space 
gets(arr);
//puts(arr);


// printf("%s\n",arr);//you can also use printf with gets and can use puts for printing datr

return 0;
}