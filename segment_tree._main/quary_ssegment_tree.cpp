#include <bits/stdc++.h>

using namespace std;
const int N = 100002;
int a[N], tree[4 * N];
void build(int node, int st, int en)
{
    if (st == en)
    {
        tree[node] = a[st];
        return;
    }
    int mid = (st + en) / 2;
    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, en);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}
int quary(int node, int st, int en, int l, int r)
{
    if (st > r || en < l)
    {
        return 0;
    }
    if (l <= st && en <= r)
    {
        return tree[node];
    }
    int mid = (st + en) / 2;
    int q1 = quary(2 * node, st, mid, l, r);
    int q2 = quary(2 * node + 1, mid + 1, en, l, r);
    return q1 + q2;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    build(1, 0, n - 1);
    while (1)
    {
        int type;
        cin >> type;
        if (type == -1)
        {
            break;
        }
        if (type == 1)
        {
            int l, r;
            cin >> l >> r;
            int ans = quary(1, 0, n - 1, l, r);
            cout << ans << endl;
        }
    }
    return 0;
}