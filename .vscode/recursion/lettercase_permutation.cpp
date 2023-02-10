#include <bits/stdc++.h>

using namespace std;
void solve(string ip, string op, vector<string> &v)
{
    if (ip.length() == 0)
    {
        v.push_back(op);
        return;
    }
    if (isalpha(ip[0]))
    {
        string op1 = op;
        string op2 = op;
        op1.push_back(toupper(ip[0]));
        op2.push_back(tolower(ip[0]));
        ip.erase(ip.begin() + 0);
        solve(ip, op1, v);
        solve(ip, op2, v);
    }
    else
    {
        string op1 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin() + 0);
        solve(ip, op1, v);
    }
    return;
}
int main()
{
    vector<string> ans;
    string ip;
    cin >> ip;
    string op;
    vector<string> v;
    solve(ip, op, v);

    for (auto i : v)
    {
        cout << i << endl;
    }
    return 0;
}