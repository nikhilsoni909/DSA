#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

} N;
struct node *front = 0;
struct node *rear = 0;
void enqueue(int x)
{
    N *new = (N *)malloc(sizeof(struct node));
    new->data = x;
    new->next = 0;
    if (rear == 0)
    {
        front = rear = new;
        rear->next = front;
    }
    else
    {
        rear->next = new;
        rear = new;
        rear->next = front;
    }
}
void deque()
{
    N *temp = front;
    if (front == 0 && rear == 0)
    {
        printf("the queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = 0;
        free(temp);
    }
    else
    {
        front = front->next;
        rear->next = front;
        free(temp);
    }
}
void peek()
{
    if (front == 0 && rear == 0)
    {
        printf("the queue is empty\n");
    }
    else
    {
        printf("%d \n", front->data);
    }
}
void display()
{
    N *temp = front;
    if (front == 0 && rear == 0)
    {
        printf("the queue is empty\n");
    }
    else
    {
        while (temp->next != front)
        {
            printf("%d \n", temp->data);
            temp = temp->next;
        }
        printf("%d \n", temp->data);
    }
}
int main()
{

    enqueue(3);
    enqueue(34);
    enqueue(325);
    enqueue(2);
    deque();
    peek();
    display();

    return 0;
}