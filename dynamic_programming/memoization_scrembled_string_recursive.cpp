#include <bits/stdc++.h>

using namespace std;
unordered_map<string, bool> mp;

bool solve(string a, string b)
{
    if (a.compare(b) == 0)
    {
        return true;
    }
    if (a.length() <= 1)
    {
        return false;
    }
    string temp = a;
    temp.push_back(' ');
    temp.append(b);

    if (mp.find(temp) != mp.end())
    {
        return mp[temp];
    }

    int n = a.length();
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (solve(a.substr(0, i), b.substr(n - i, i)) && solve(a.substr(i, n - i), b.substr(0, n - i)) || solve(a.substr(0, i), b.substr(0, i)) && solve(a.substr(i, n - i), b.substr(i, n - i)))
        {
            flag = true;
            break;
        }
    }
    return mp[temp] = flag;
}
int main()
{
    string a;
    string b;
    cin >> a >> b;
    if (a.length() != b.length())
    {
        cout << "0";
        return 0;
    }
    if (a.empty() && b.empty())
    {
        cout << "1";
        return true;
    }

    cout << solve(a, b);
    return 0;
}