#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int parent[N];
int ranks[N];
void makeset(int v)
{
    for (int i = 0; i < v; i++)
    {
        parent[i] = i;
        ranks[i] = 0;
    }
}
int findpar(int node)
{
    if (node == parent[node])
    {
        return node;
    }
    return parent[node] = findpar(parent[node]);
}
void unions(int u, int v)
{
    u = findpar(u);
    v = findpar(v);
    if (ranks[u] < ranks[v])
    {
        parent[u] = v;
    }
    else if (ranks[v] < ranks[u])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        ranks[u]++;
    }
}
int main()
{

    for (int i = 0; i < N; i++)
    {
        makeset(i);
    }
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({w, u, v});
    }
    sort(edges.begin(), edges.end());
    int cost = 0;
    for (auto i : edges)
    {
        int w = i[0];
        int u = i[1];
        int v = i[2];
        int x = findpar(u);
        int y = findpar(v);
        if (x == y)
        {
            continue;
        }
        else
        {
            cout << u << " " << v << "\n";
            cost += w;
            unions(u, v);
        }
    }
    cout << cost;
    return 0;
}