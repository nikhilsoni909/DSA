#include <bits/stdc++.h>

using namespace std;
void insertsort(stack<int> &v, int temp)
{
    if (v.size() == 0 || v.top() <= temp)
    {
        v.push(temp);
        return;
    }
    int val = v.top();
    v.pop();
    insertsort(v, temp);
    v.push(val);
    return;
}
void sortv(stack<int> &v)
{
    if (v.size() == 1)
    {
        return;
    }
    int temp = v.top();
    v.pop();
    sortv(v);
    insertsort(v, temp);
    return;
}
int main()
{
    stack<int> a;

    for (int i = 0; i < 10; i++)
    {
        int t;
        cin >> t;
        a.push(t);
    }
    // a.push(2);
    // a.push(53);
    // a.push(1);
    // cout << "hello";
    sortv(a);

    while (!a.empty())
    {
        cout << a.top() << " ";
        a.pop();
    }
    return 0;
}