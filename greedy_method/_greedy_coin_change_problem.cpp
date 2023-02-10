#include <bits/stdc++.h>
#define vi vector<int>
#define pi pair<int, int>
#define vii vector<pi>
#define rep(i, a, n) for (int i = a; i < n; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;

int main()
{
    int n;
    cin >> n;

    vi a(n);

    rep(i, 0, n)
            cin >>
        a[i];

    int x;
    cin >> x;
    sort(a.begin(), a.end(), greater<int>());

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += x / a[i];
        x -= x / a[i] * a[i];
    }
    cout << ans << endl;
}