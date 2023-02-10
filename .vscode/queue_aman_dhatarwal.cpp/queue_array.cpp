#include <iostream>
#define n 20
using namespace std;
class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void enque(int x)
    {
        if (back == n - 1)
        {
            cout << "queue overflow\n";
            return;
        }
        back++;
        arr[back] = x;

        if (front = -1)
        {
            front++;
        }
    }
    void deque()
    {
        if (front == -1 || front > back)
        {
            cout << "queue is empty\n";
            return;
        }
        front++;
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "queue is empty\n";
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if (front == -1 || front > back)
        {

            return true;
        }
        return false;
    }
    void display()
    {
        if (front == -1 || front > back)
        {
            cout << "queue is empty\n";
            return;
        }
        for (int i = front; i <= back; i++)
        {
            cout << arr[i] << endl;
        }
        cout << endl;
    }
};
int main()
{

    queue q;
    q.enque(9);
    q.enque(2);
    q.enque(3);

    // cout << q.peek();
    // q.deque();
    // cout << q.peek();
    // q.deque();
    // cout << q.peek();
    q.display();
    return 0;
}