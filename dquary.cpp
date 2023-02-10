#include <bits/stdc++.h>

using namespace std;
#define int long long

const int N = 200002, MOD = 1000000007;
struct Q
{
    int l, r, idx;
};

int rootN;

bool compare(Q q1, Q q2)
{
    if (q1.l / rootN == q2.l / rootN)
    {
        return q1.r > q2.r;
    }
    return q1.l < q2.l;
}
Q q[N];
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
    int curr_l = 0, curr_r = -1, l, r;
    int curr_ans = 0;
    vector<int> freq(10 * N, 0);
    for (int i = 0; i < quaries; i++)
    {
        l = q[i].l;
        r = q[i].r;
        l--;

        r--;
        while (curr_r < r)
        {
            curr_r++;
            freq[a[curr_r]]++;
            if (freq[a[curr_r]] == 1)
            {
                curr_ans++;
            }
        }
        while (curr_l > l)
        {
            curr_l--;
            freq[a[curr_l]]++;
            if (freq[a[curr_l]] == 1)
            {
                curr_ans++;
            }
        }
        while (curr_l < l)
        {
            freq[a[curr_l]]--;
            curr_l++;
            if (freq[a[curr_l]] == 0)
            {
                curr_ans--;
            }
        }
        while (curr_r > r)
        {
            freq[a[curr_r]]--;
            curr_r--;
            if (freq[a[curr_r]] == 0)
            {
                curr_ans--;
            }
        }

        ans[q[i].idx] = curr_ans;
    }

    for (int i = 0; i < quaries; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}