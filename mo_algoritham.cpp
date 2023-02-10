#include <bits/stdc++.h>

using namespace std;
#define int long long
const int N = 100002, MOD = 1000000007;
int rootN;
struct Q
{
    int idx, l, r;
};
Q q[N];

bool compare(Q q1, Q q2)
{
    if (q1.l / rootN == q2.l / rootN)
    {
        return q1.r > q2.r;
    }
    return q1.l < q2.l;
}
signed main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    rootN = sqrtl(n);
    int quaries;
    cin >> quaries;
    for (int i = 0; i < quaries; i++)
    {
        int l, r;
        cin >> l >> r;
        q[i].l = l;
        q[i].r = r;
        q[i].idx = i;
    }
    sort(q, q + quaries, compare);
    vector<int> ans(quaries);
    int curr_l = 0, l, r;
    int curr_r = -1;
    int curr_ans = 0;
    for (int i = 0; i < quaries; i++)
    {
        l = q[i].l;
        r = q[i].r;
        l--;
        r--;
        while (curr_r < r)
        {
            curr_r++;
            curr_ans += a[curr_r];
        }

        while (curr_l > l)
        {
            curr_l--;
            curr_ans += a[curr_l];
        }
        while (curr_l < l)
        {
            curr_ans -= a[curr_l];
            curr_l++;
        }
        while (curr_r > r)
        {
            curr_ans -= a[curr_r];
            curr_r--;
        }
        ans[q[i].idx] = curr_ans;
    }

    for (int i = 0; i < quaries; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
