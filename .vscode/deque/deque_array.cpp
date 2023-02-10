#include <iostream>
using namespace std;

#define N 5
int deque[N];
int f = -1;
int r = -1;
void enquefront(int x)
{
    if ((f == 0 && r == N - 1) || (f == r + 1))
    {
        printf("queue is full1\n");
    }
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        deque[f] = x;
    }
    else if (f == 0)
    {
        f = N - 1;
        deque[f] = x;
    }
    else
    {

        f--;
        deque[f] = x;
    }
}

void enquerear(int x)
{
    if ((f == 0 && r == N - 1) || (f == r + 1))
    {
        printf("queue is full1\n");
    }
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        deque[r] = x;
    }
    else if (r = N - 1)
    {
        r = 0;
        deque[r] = x;
    }
    else
    {

        r++;
        deque[r] = x;
    }
}
void display()
{
    int i = f;

    if (f == -1 && r == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        while (i != r)
        {
            printf("%d\n", deque[i]);
            i = (i + 1) % N;
        }
        printf("%d\n", deque[r]);
    }
}
void getfront()
{
    if (f == -1 && r == -1)
    {
        printf("queue is empty\n");
    }
    else
    {

        printf("%d\n", deque[f]);
    }
}
void getrear()
{
    if (f == -1 && r == -1)
    {
        printf("queue is empty\n");
    }
    else
    {

        printf("%d\n", deque[r]);
    }
}
void dequefront()
{

    if (f == -1 && r == -1)
    {
        printf("queue is empty\n");
    }
    else if (f == r)
    {

        f = r = -1;
    }
    else if (f == N - 1)
    {

        printf("%d dequeud\n", deque[f]);
        f = 0;
    }
    else
    {
        printf("%d deque", deque[f]);
        f++;
    }
}
void dequerear()
{

    if (f == -1 && r == -1)
    {
        printf("queue is empty\n");
    }
    else if (f == r)
    {

        f = r = -1;
    }
    else if (r == 0)
    {

        printf("%d dequeud\n", deque[r]);
        r = N - 1;
    }
    else
    {
        printf("%d deque", deque[r]);
        r--;
    }
}
int main()
{
    enquefront(1);
    enquefront(3);
    enquefront(23);
    display();
    dequefront();

    display();
    getrear();
    getfront();
    return 0;
}