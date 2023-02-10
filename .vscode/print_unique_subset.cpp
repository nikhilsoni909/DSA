#include <bits/stdc++.h>

using namespace std;
void solve(string ip, string op, set<string> &st)
{
    if (ip.length() == 0)
    {
        st.insert(op);
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    solve(ip, op1, st);
    solve(ip, op2, st);
    return;
}
int main()
{
    string s;
    cin >> s;

    set<string> st;
    string op = " ";
    solve(s, op, st);
    for (auto i : st)
    {
        cout << i;
    }
    return 0;
}