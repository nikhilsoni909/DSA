#include <bits/stdc++.h>

using namespace std;
void update(int idx, int val, int bit[], int n)
{
    while (idx <= n)
    {
        bit[idx] += val;
        idx += idx & (-idx);
    }
}
int query(int idx, int bit[], int n)
{
    int ans = 0;
    while (idx > 0)
    {
        ans += bit[idx];
        idx -= idx & (-idx);
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int bit[n + 10] = {0};
        int u;
        cin >> u;
        while (u--)
        {
            int l, r, inc;
            cin >> l >> r >> inc;
            l++;
            r++;
            update(l, inc, bit, n);
            update(r + 1, -inc, bit, n);
        }
        int q;
        cin >> q;
        while (q--)
        {
            int w;
            cin >> w;
            w++;
            cout << query(w, bit, n) << endl;
        }
    }

    return 0;
}