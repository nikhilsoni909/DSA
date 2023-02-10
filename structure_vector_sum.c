#include<stdio.h>
#include<string.h>
typedef struct vector
{
    int x;
    int y;
    
} vec;

vec sumvec(vec a,vec b){
vec result;
result.x=a.x+b.x;
result.y=a.y+b.y;
return result;
}
int main()
 {
     vec v1,v2,sum;
//  v1.x=2;
//  v1.y=3;
vec*ptr=&v1;
(*ptr).x=2;
ptr->y=3;
 printf("x dimension is %d and y dimension is %d\n",ptr->x,ptr->y);

//  printf("x dimension is %d and y dimension is %d\n",v1.x,v1.y);
 v2.x=2;
 v2.y=3;
  printf("x dimension is %d and y dimension is %d\n",v2.x,v2.y);
sum=sumvec(v1,v2);
 printf("sum of  x dimension is %d and y dimension is %d\n",sum.x,sum.y);

return 0;
}