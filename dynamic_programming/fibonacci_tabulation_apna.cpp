#include <iostream>
#define rep(i, a, n) for (int i = a; i < n; i++)

using namespace std;
int fib(int n, int dp[])
{
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    int dp[n + 1];

    cout << fib(n, dp) << endl;
    return 0;
}