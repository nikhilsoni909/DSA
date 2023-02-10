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
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }
    bool cycle = false;
    for (auto i : edges)
    {
        int u = i[0];
        int v = i[1];
        int x = findpar(u);
        int y = findpar(v);
        if (x == y)
        {
            cycle = true;
        }
        else
        {
            unions(u, v);
        }
    }
    if (cycle)
    {
        cout << "cycle is present";
    }
    else
    {
        cout << "it does not contain a cyclef";
    }
    return 0;
}