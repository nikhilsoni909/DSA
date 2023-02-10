#include <bits/stdc++.h>

using namespace std;
unordered_map<string, int> mp;
int SolveRecurr(string s, int i, int j, bool isTrue)
{
    // base condition
    if (i > j)
    {
        return false;
    }
    if (i == j)
    {
        if (isTrue == true)
        {
            return s[i] == 'T';
        }
        else
        {
            return s[i] == 'F';
        }
    }
    string temp = to_string(i);
    temp.push_back(' ');
    temp.append(to_string(j));
    temp.push_back(' ');
    temp.append(to_string(isTrue));
    if (mp.find(temp) != mp.end())
    {
        return mp[temp];
    }

    int ans = 0;
    for (int k = i + 1; k <= j - 1; k += 2)
    {
        int lT = SolveRecurr(s, i, k - 1, true);
        int lF = SolveRecurr(s, i, k - 1, false);
        int rT = SolveRecurr(s, k + 1, j, true);
        int rF = SolveRecurr(s, k + 1, j, false);

        // now we will check for each operator (&, |, ^)
        if (s[k] == '&')
        {
            if (isTrue == true)
            {
                ans += (lT * rT); // both should be true
            }
            else
            {
                ans += (lF * rT) + (lT * rF) + (lF * rF); // any one / both should be false
            }
        }
        else if (s[k] == '|')
        {
            if (isTrue == true)
            {
                ans += (lT * rT) + (lT * rF) + (lF * rT); // any one should be true
            }
            else
            {
                ans += (lF * rF); // both should be false
            }
        }
        else if (s[k] == '^')
        {
            if (isTrue == true)
            {
                ans += (lT * rF) + (lF * rT); // xor condition
            }
            else
            {
                ans += (lT * rT) + (lF * rF);
            }
        }
    }
    return mp[temp] = ans;
}

int main()
{
    string s = "T^F&T";
    mp.clear();
    int n = s.length();
    int res = SolveRecurr(s, 0, n - 1, true);
    cout << res << "\n";
    return 0;
}