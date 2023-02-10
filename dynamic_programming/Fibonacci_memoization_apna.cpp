#include <iostream>
#define rep(i, a, n) for (int i = a; i < n; i++)
const int N = 10000;
int dp[N];
using namespace std;
int fib(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    cin >> n;
    rep(i, 0, N)
    {
        dp[i] = -1;
    }
    cout << fib(n) << endl;
    return 0;
}