#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ans = 0;
    string s = "aabaabaa";
    string p = "aaba";
    unordered_map<char, int> mp;
    for (auto x : p)
    {
        mp[x]++;
    }
    int count = mp.size();
    int n = s.size();
    int i = 0;
    int j = 0;
    int k = p.size();
    // sliding window
    while (j < n)
    {
        if (mp.find(s[j]) != mp.end())
        {
            mp[s[j]]--;
            if (mp[s[j]] == 0)
            {
                count--;
            }
        }

        if (j - i + 1 < k)
        { // sum of i and j less then size of window

            j++;
        }
        else
        {
            if (count == 0)
            {
                ans++;
            }
            if (mp.find(s[i]) != mp.end())
            {
                mp[s[i]]++;
                if (mp[s[j]] == 1)
                {
                    count++;
                }
                j++;
                i++;
            }
        }
    }
    cout << ans;
    return 0;
}