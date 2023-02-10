#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; i++)
#define vii vector<vector<int>>
#define vi vector<int>
#define pii pair<int, int>
#define ss second
using namespace std;
//not working
int main()
{
    int k;
    cin >> k;
    vii a(k);
    rep(i, 0, k)
    {
        int size;
        cin >> size;

        a[i] = vector<int>(size);
        rep(j, 0, size)
        {
            cin >> a[i][j];
        }
    }
    vi idx(k, 0);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    rep(i, 0, k)
    {
        pii p;
        p.first = a[i][0];
        p.ss = i;
        pq.push(p);
    }
    vi ans;
    while (!pq.empty())
    {

        pii x = pq.top();
        pq.pop();
        ans.push_back(x.first);
        if (idx[x.ss] + 1 < a[x.ss].size())
        {
            // pq.push({a[x.ss][idx[x.ss] + 1], x.ss});
            pii p;
            p.first = a[x.ss][idx[x.ss] + 1];
            p.second = x.second;
            pq.push(p);
        }
    }

    rep(i, 0, ans.size())
    {
        cout << ans[i] << endl;
    }
    return 0;
}