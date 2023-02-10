#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1000;
vector<vector<int>> g[N];
int cost = 0;
const int INF = INT_MAX;
vector<int> dist(N), parent(N);
vector<bool> vis(N);
void primsMST(int source)
{
    for (int i = 0; i < n; i++)
    {
        dist[i] = INF;
    }
    set<vector<int>> s;
    dist[source] = 0;
    s.insert({0, source});

    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        vis[x[1]] = true;
        int u = x[1];
        int v = parent[x[1]];
        int w = x[0];
        cout << u << " " << v << " " << w << "\n";
        cost += w;
        for (auto i : g[x[1]])
        {
            if (vis[i[0]])
            {
                continue;
            }
            if (dist[i[0]] > i[1])
            {
                s.erase({dist[i[0]], i[0]});
                dist[i[0]] = i[1];
                s.insert({dist[i[0]], i[0]});
                parent[i[0]] = x[1];
            }
        }
    }
    cout << cost;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    primsMST(0);
}