#include <bits/stdc++.h>
#define vi vector<int>
#define pi pair<int, int>
#define vii vector<pi>
#define rep(i, a, n) for (int i = a; i < n; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

using namespace std;
// const int N = 1000;
// bool vis[N];
// vector<int> adj[N];
int main()
{

    int n, m;
    cin >> n >> m;
    int cnt = 0;
    vector<int> indeg(n, 0);
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);

        indeg[v]++;
    }
    queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
        {
            pq.push(i);
        }
    }
    while (!pq.empty())
    {
        cnt++;
        int x = pq.front();
        pq.pop();
        cout << x << " ";
        for (auto it : adj[x])
        {
            indeg[it]--;

            if (indeg[it] == 0)
            {
                pq.push(it);
            }
        }
    }
    if (cnt != n)
    {
        cout << "cycle detected cycle";
    }
}