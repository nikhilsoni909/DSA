#include <iostream>

using namespace std;
const int N = 100000, MOD = 1000000000;
int power(int a, int n)
{
    a %= MOD;
    int ans = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            ans = (ans * a) % MOD;
        }
        a = (a * a) % MOD;
        n = n >> 1;
    }
    return ans;
}
int main()
{
    int a;
    int n;
    cin >> a >> n;
    cout << power(a, n) << endl;
    return 0;
}