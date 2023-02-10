#include <bits/stdc++.h>

using namespace std;
void solve(stack<int> &s, int k)
{
    if (k == 1)
    {
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s, k - 1);
    s.push(temp);
    return;
}
stack<int> middel(stack<int> &s, int size)
{
    if (s.size() == 0)
    {
        return s;
    }
    int k = (size / 2) + 1;
    solve(s, k);
    return s;
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
    middel(a, n);
    while (!a.empty())
    {
        cout << a.top() << " ";
        a.pop();
    }
    return 0;
}