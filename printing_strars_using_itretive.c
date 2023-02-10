#include<stdio.h>
int print_stars(int n){
    
for (int i = 1; i <= n; i++)
{

for ( int j = 0; j < 2*i-1; j++)
{
printf("*");
}
printf("\n");

}



}


int main()
 {
     int n;
printf("enter number:\n");
scanf("%d",&n);
print_stars(n);
return 0;
}