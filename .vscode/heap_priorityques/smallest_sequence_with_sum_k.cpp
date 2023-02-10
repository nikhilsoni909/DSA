#include <bits/stdc++.h>
//#define vi vector<int>
#define rep(i, a, n) for (int i = a; i < n; i++)
#define vii vector<vector<int>>
#define vi vector<int>
#define pii pair<int, int>
#define ss second
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    priority_queue<int, vi> pq;
    rep(i, 0, n)
    {
        cin >> a[i];
    }

    rep(i, 0, n)
    {
        pq.push(a[i]);
    }
    int sum = 0;
    int cnt = 0;
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
        cnt++;
        if (sum >= k)
        {
            break;
        }
    }
    if (sum < k)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << cnt << endl;
    }
    return 0;
}