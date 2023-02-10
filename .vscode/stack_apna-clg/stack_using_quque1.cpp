#include <bits/stdc++.h>

using namespace std;
class Stack
{
public:
    int N;
    queue<int> q1;
    queue<int> q2;
    Stack()
    {
        N = 0;
    }
    void push(int val)
    {
        q2.push(val);
        N++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop()
    {
        q1.pop();
        N--;
    }
    int top()
    {
        return q1.front();
    }
    int size()
    {
        return N;
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(45);
    cout << st.top() << endl;

    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();

    cout << st.size() << endl;
    return 0;
}