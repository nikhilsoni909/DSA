#include<stdio.h>
union nikhil
{
    int data ;
    char name ;
};

int main()
 {union nikhil  d1,d2;
 d1.data=12;
//    d2.data=1234;
//    d1.name='h';

//  d2.name='n';
printf("%d   ",d1.data);

return 0;
}