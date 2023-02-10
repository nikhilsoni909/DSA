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
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vii a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }

        int l, p;
        cin >> l >> p;
        for (int i = 0; i < n; i++)
        {
            a[i].first = l - a[i].first;
        }
        sort(a.begin(), a.end());

        int ans = 0;
        int curr = p;
        priority_queue<int, vector<int>> pq;
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (curr >= l)
            {
                break;
            }
            while (curr < a[i].first)
            {

                if (pq.empty())
                {
                    flag = 1;
                    break;
                }
                ans++;
                curr += pq.top();
                pq.pop();
            }
            if (flag == 1)
            {
                break;
            }
            pq.push(a[i].second);
        }
        if (flag)
        {
            cout << "-1" << endl;
            continue;
        }
        while (!pq.empty() && curr < l)
        {
            curr += pq.top();
            pq.pop();
            ans++;
        }
        if (curr < l)
        {
            cout << "-1" << endl;
            continue;
        }
        cout << ans;
    }

    return 0;
}