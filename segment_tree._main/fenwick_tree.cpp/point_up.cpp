#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> bit;
void update(int idx, int val)
{
    while (idx <= n)
    {
        bit[idx] += val;
        idx += idx & (-idx);
    }
}
int query(int idx)
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
    cin >> n;
    bit = vector<int>(n + 1);
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        update(i, a[i]);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            int l, r;
            cin >> l >> r;
            int ans = query(r) - query(l - 1);
            cout << ans << endl;
        }

        else if (c == 2)
        {
            int index, val;
            cin >> index >> val;
            update(index, -a[index]);
            a[index] = val;
            update(index, val);
            a[index] = val;
            update(index, val);
        }
    }

    return 0;
}