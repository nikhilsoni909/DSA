#include<stdio.h>
#define N 5
int stack[N];
int top=-1;

void push(int x){
if (top==N-1)
{
    printf("stack overflow\n");
}
else
{ printf("%d is pushed\n",x);
    top++;
    stack[top]=x;
}




}
void pop(){
int item;
if(top==-1)
{

    printf("stack underflow\n ");
}
else
{
    item=stack[top];
    top--;
    printf("%d is poped\n",item);
}

}
void peek(){

    if(top==-1){

        printf("stack is empty\n");
    }
    else{

printf("%d\n",stack[top]);

    }
}
void display(){

    for(int i=top;i>=0;i--)
    {
printf("%d\n",stack[i]);


    }
}
int main()
 {push(1);
 push(2);
 pop();
 peek();
 display();

return 0;
}