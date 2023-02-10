#include <bits/stdc++.h>
#define vi vector<int>
#define pi pair<int, int>
#define vii vector<pi>
#define rep(i, a, n) for (int i = a; i < n; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;

int main()
{
    int n;
    cin >> n;
    // vector<int>v(n);
    vi a(n);

    rep(i, 0, n)
    {
        cin >> a[i];
    }
    priority_queue<int, vector<int>, greater<int>> mh;

    rep(i, 0, n)
    {
        mh.push(a[i]);
    }
    int ans = 0;

    while (mh.size() > 1)
    {
        int e1 = mh.top();
        mh.pop();
        int e2 = mh.top();
        mh.pop();

        ans += e1 + e2;
        mh.push(e1 + e2);
    }
    cout << ans;
}