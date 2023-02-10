#include <bits/stdc++.h>

using namespace std;
const int inf = 10000;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }
    int source;
    cin >> source;
    vector<int> dist(n, inf);
    dist[source] = 0;
    bool change = false; // for checking cycyle
    for (int iter = 0; iter < n - 1; iter++)
    {
        // for checking cycle
        for (auto e : edges)
        {
            int u = e[0];
            int v = e[1];
            int w = e[2];
            if (dist[v] > w + dist[u])
            { // for cycle detection
                change = true;
            }
            dist[v] = min(dist[v], w + dist[u]);
        }
    }
    for (auto i : dist)
    {
        cout << i << " ";
        cout << "\n";
    }
    if (change)
    {
        cout << "looop deceted";
    }