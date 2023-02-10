#include <iostream>
#define n 100
using namespace std;
class stack
{
    int *arr;
    int top;
    // by nikhil
    int count = 0; // by nikhil

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
        count++;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow" << endl;
            return;
        }
        top--;
        count--;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "stack underflow" << endl;
            return 0;
        }
        return arr[top];
    }
    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
    void display()
    {
        for (int i = 0; i < count; i++)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.peek();
    cout << endl;
    cout << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.display();
    return 0;
}