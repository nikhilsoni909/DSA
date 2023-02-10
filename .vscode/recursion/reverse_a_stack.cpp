#include <bits/stdc++.h>

using namespace std;
void inserte(stack<int> &s, int ele)
{
    if (s.size() == 0)
    {
        s.push(ele);
        return;
    }
    int temp = s.top();
    s.pop();
    inserte(s, ele);
    s.push(temp);
    return;
}
void reverse(stack<int> &s)
{
    if (s.size() == 1)
    {
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    inserte(s, temp);
    return;
}
int main()
{

    int n;
    cin >> n;
    stack<int> a;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.push(t);
    }
    if (a.size() == 0)
    {
        return 0;
    }
    reverse(a);
    while (!a.empty())
    {
        cout << a.top() << " ";
        a.pop();
    }
    return 0;
}