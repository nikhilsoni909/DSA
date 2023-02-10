#include <bits/stdc++.h>

using namespace std;
int static dp[100][100];
int solve(int e, int f)
{
    if (f == 0 || f == 1)
    {
        return f;
    }
    if (e == 1)
    {
        return f;
    }

    if (dp[e][f] != -1)
    {
        return dp[e][f];
    }

    int mn = INT_MAX;
    for (int k = 1; k <= f; k++)
    {
        int low, high;
        if (dp[e - 1][k - 1] != -1)
        {
            low = dp[e - 1][k - 1];
        }
        else
        {
            low = solve(e - 1, k - 1);
        }
        if (dp[e][f - k] != -1)
        {
            high = dp[e][f - k];
        }
        else
        {
            high = solve(e, f - k);
        }
        int temp = 1 + max(low, high);
        mn = min(mn, temp);
    }
    return dp[e][f] = mn;
}
int main()
{
    int f, e;
    memset(dp, -1, sizeof(dp));
    cin >> f >> e;
    cout << solve(e, f);

    return 0;
}