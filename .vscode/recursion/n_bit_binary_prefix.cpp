#include <bits/stdc++.h>

using namespace std;
void solve(int n, string op, int one, int zero, vector<string> &v)
{
    if (n == 0)
    {
        v.push_back(op);

        return;
    }

    string op1 = op;
    op1.push_back('1');
    solve(n - 1, op1, one + 1, zero, v);

    if (one > zero)
    {
        string op2 = op;
        op2.push_back('0');
        solve(n - 1, op2, one, zero + 1, v);
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    int one = 0;
    int zero = 0;
    string op = " ";
    vector<string> ans;
    solve(n, op, one, zero, ans);
    for (auto i : ans)
    {
        cout << i << endl;
    }

    return 0;
}