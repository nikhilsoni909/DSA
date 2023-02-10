#include <bits/stdc++.h>
#define vi vector<int>
#define ff first
#define ss second
#define rep(i, a, n) for (int i = a; i < n; i++)

using namespace std;

int main()
{
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    map<int, int> cnt;
    int sum = 0;
    rep(i, 0, n)
    {
        sum += a[i];
        cnt[sum]++;
    }
    int ans = 0;
    map<int, int>::iterator it;
    for (it = cnt.begin(); it != cnt.end(); it++)
    {
        int c = it->second;
        ans += (c * (c - 1)) / 2;
        if (it->first == 0)
        {
            ans += it->second;
        }
    }
    cout << ans << endl;
    return 0;
}