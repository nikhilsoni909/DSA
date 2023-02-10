#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = 0; i < n; i++)

using namespace std;
const int N = 100000;
const int mod = 1000000000;
int dp[N];
int minsquare(int n)
{
    if (n <= 3)
    {
        return n;
    }

    if (dp[n] != mod)
    {
        return dp[n];
    }
    for (int i = 1; i * i <= n; i++)
    {
        dp[n] = min(dp[n], 1 + minsquare(n - i * i));
    }
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    // memset(dp, mod, sizeof(dp));
    rep(i, 0, N)
    {
        dp[i] = mod;
    }
    cout << minsquare(n);
    return 0;
}