#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = 0; i < n; i++)

using namespace std;

int minsquare(int n, vector<int> dp)
{
    dp[0] = 0;
    // dp[1] = 1;
    // dp[2] = 2;
    // dp[3] = 3;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = i;
        for (int j = 1; j * j <= i; j++)
        {
            int sq = j * j;
            dp[i] = min(dp[i], 1 + dp[i - sq]);
        }
    }
    return dp[n];
}
int main()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1);
    cout << minsquare(n, dp);
    return 0;
}