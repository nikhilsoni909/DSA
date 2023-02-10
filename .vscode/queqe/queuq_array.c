#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;    
void enque(int x){
if (rear==N-1)
{
    printf("queue overflow\n");

}
else if (rear==-1&&front==-1)
{
front=rear=0;
queue[rear]=x;
}
else
{
    rear++;
    queue[rear]=x;
}




}
void deque(){
if (front==-1&&rear==-1)
{
printf("queue is empty\n");
}
else if (front==rear)
{
front=rear=-1;
}
else
{
    printf("%d is dequed\n",queue[front]);
    front++;
}




}
void display(){
    int i;
    if (front==-1&&rear==-1)
    {
printf("queue is empty\n");

    }
else
{
for ( i = front; i < rear+1; i++)
{
    printf("%d ",queue[i]);
}



}    


}
void peek(){
if (front==-1&&rear==-1)
    {
printf("queue is empty\n");

    }
    else{


        printf("%d \n",queue[front]);
    }


}
int main(){
enque(3);
enque(2);
enque(1);
deque();
peek();
display();

   
   
    return 0;

}