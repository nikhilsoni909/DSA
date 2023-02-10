#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = 0; i < n; i++)

using namespace std;
const int N = 100000;
const int mod = 1000000000;

int minsquare(int n, vector<int> dp)
{
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for (int i = 1; i * i <= n; i++)
    {
        for (int j = 0; i * i + j <= n; j++)
        {
            dp[i * i + j] = min(dp[i * i + j], 1 + dp[j]);
        }
    }
    return dp[n];
}
int main()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1, mod);
    cout << minsquare(n, dp);
    return 0;
}