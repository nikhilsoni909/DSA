#include <bits/stdc++.h>
#define vi vector<int>
#define pi pair<int, int>
#define vii vector<pi>
#define rep(i, a, n) for (int i = a; i < n; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

using namespace std;
const int N = 1000;
bool vis[N];
vector<int> adj[N];

void dfs(int node)
{
    // preorder
    vis[node] = 1;
    cout << node << " ";

    // inorder
    vector<int>::iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (vis[*it])
        {
        }
        else
        {
            dfs(*it);
        }
    }
    // postorder
    // cout << node << " ";
}
int main()
{
    int n, m;
    cin >> n >> m;

    rep(i, 0, m)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
}