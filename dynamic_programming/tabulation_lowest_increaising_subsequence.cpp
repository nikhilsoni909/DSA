#include <bits/stdc++.h>

using namespace std;
const int N = 100000, MOD = 1000000000;
int dp[N];

int lis(vector<int> &a, int n, vector<int> &dp)
{
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                dp[i] = max(dp[i], 1 + dp[j]);
            }
        }
        ans = max(ans, dp[i]);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n, 1);
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << lis(a, n - 1, dp);
    return 0;
}