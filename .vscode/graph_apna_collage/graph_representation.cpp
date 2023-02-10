#include <bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int, int>
#define vii vector<pi>
#define rep(i, a, n) for (int i = a; i < n; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;
const int N = 1000;
vi adj[N]; // for adjency list
int main()
{
    int n, m;
    // adjency matrix
    // cin >> n >> m;
    // vvi adjm(n + 1, vi(n + 1, 0));

    // rep(i, 0, m)
    // {
    //     int x, y;
    //     cin >> x >> y;
    //     adjm[x][y] = 1;
    //     adjm[y][x] = 1;
    // }
    // cout << "adjency matrix of above graph is given by:" << endl;
    // rep(i, 1, n + 1)
    // {

    //     rep(j, 1, n + 1)
    //     {
    //         cout << adjm[i][j];
    //     }
    //     cout << endl;
    // }

    // adjency list
    cin >> n >> m;
    rep(i, 0, m)
    {
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    rep(i, 1, n + 1)
    {
        cout << i << "->";
        for (int x : adj[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}