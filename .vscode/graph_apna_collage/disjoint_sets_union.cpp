#include <iostream>
using namespace std;

int parent[10000];
int ranks[10000];
void makeset(int n)
{
    for (int i = 0; i < n; i++)
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

    int n;
    cin >> n;
    makeset(n);
    while (n--)
    {
        int u, v;
        cin >> u >> v;
        unions(u, v);
    }
    // input
    // 3
    // 0 2
    // 4 2
    // 3 1
    // if 1 or 0 belongs to the same comnponent or not
    if (findpar(1) != findpar(0))
    {
        cout << "diffrent component";
    }
    else
    {
        cout << "same component";
    }
    return 0;
}