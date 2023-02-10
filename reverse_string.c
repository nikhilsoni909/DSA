#include<stdio.h>
void reverse(char a[]){
    static int length;
while (a[length] != '\0')
{
    length++;
}
for (int i = 0; i <(length-1)/2; i++)
{
    int temp = a[i];
    a[i]=a[length-i-1];
    a[length-i-1]=temp;
}



}
int main()
 {
char string[]={"hello"};
printf("%s\n",string);
reverse(string);
printf("%s\n",string);
return 0;
}