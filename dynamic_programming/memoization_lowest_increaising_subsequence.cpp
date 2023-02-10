#include <bits/stdc++.h>

using namespace std;
const int N = 100000, MOD = 1000000000;
int dp[N];

int lis(vector<int> &a, int n)
{
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[n] > a[i])
        {
            dp[n] = max(dp[n], 1 + lis(a, i));
        }
    }
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << lis(a, n - 1);
    return 0;
}