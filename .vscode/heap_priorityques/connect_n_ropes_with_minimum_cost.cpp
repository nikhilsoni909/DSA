#include <bits/stdc++.h>

using namespace std;
int mincost(int a[], int n)
{
    priority_queue<int, vector<int>, greater<int>> p;
    for (int i = 0; i < n; i++)
    {
        p.push(a[i]);
    }
    int ans = 0;
    while (p.size() > 1)
    {
        int first = p.top();
        p.pop();
        int second = p.top();
        p.pop();
        int sum = first + second;
        ans += sum;
        p.push(sum);
    }
    return ans;
}
int main()
{
    int ar[] = {2, 5, 4, 8, 6, 9};
    int n = 6;
    cout << mincost(ar, n);

    return 0;
}