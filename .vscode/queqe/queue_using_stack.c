#include <stdio.h>
#define N 5
int s1[N];
int s2[N];
int top1 = -1;
int top2 = -1;
int count = 0;
void push1(int data)
{
    if (top1 == N - 1)
    {
        printf("queuq is full\n");
    }
    else
    {
        top1++;
        s1[top1] = data;
    }
}
void push2(int data)
{
    if (top2 == N - 1)
    {
        printf("queuq is full\n");
    }
    else
    {
        top2++;

        s2[top2] = data;
    }
}
int pop1()
{

    return s1[top1--];
}
int pop2()
{
    return s2[top2--];
}

void enque(int x)
{
    push1(x);
    count++;
}
void deque()
{
    int i, a, b;
    if (top1 == -1 && top2 == -1)
    {
        printf("queue is empty\n");
    }

    else
    {
        for (i = 0; i < count; i++)
        {
            a = pop1();
            push2(a);
        }
        b = pop2();
        printf("%d is removed", b);
        count--;
        for (i = 0; i < count; i++)
        {
            a = pop2();
            push1(a);
        }
    }
}
void display()
{
    int i;
    for (int i = 0; i <= top1; i++)
    {
        printf("%d \n", s1[i]);
    }
}
int main()
{
    enque(1);
    enque(2);
    enque(3);
    enque(4);
    enque(5);

    deque();
    deque();
    display();
    return 0;
}