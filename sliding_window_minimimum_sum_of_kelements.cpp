#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    int s = 0;
    int ans = INT_MAX;
    rep(i, 0, n)
    {
        s += a[i];
    }
    cout << s << " ";
    ans = min(ans, s);
    rep(i, 1, n - k + 1)
    {
        s -= a[i - 1];
        s += a[i + k - 1];
        ans = min(ans, s);
        cout << s << " ";
    }
    cout << endl;
    cout << ans << endl;
    return 0;
}