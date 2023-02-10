#include<stdio.h>
int slice(char *ptr,int m,int n){
int i=0;
while (m+i<n)
{
ptr[i]=ptr[i+m];
    i++;
    
}
ptr[i]='\0';


}
int main()
 {char a[]="hello bro";     
slice(a,2,8);
printf("%s",a);
return 0;
}