#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enque(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }

    else if (((rear + 1) % N) == front)
    { // or fornt==rear+1;

        printf("queue is full \n");
    }
    else
    {

        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}
void deque()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {

        printf("%d dequed", queue[front]);
        front = (front + 1) % N;
    }
}
void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("queue is deedmpty\n");
    }
    else
    {

        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % N;
        }
        printf("%d ", queue[rear]);
    }
}
void peek()
{

    printf("%d\n", queue[front]);
}
int main()
{
    enque(1);
    enque(2);
    enque(10);
    enque(11);
    deque();
    deque();
    display();
    return 0;
}