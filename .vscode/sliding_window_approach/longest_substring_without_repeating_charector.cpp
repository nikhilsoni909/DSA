#include <bits/stdc++.h>

using namespace std;

int main()
{
    string arr = "pwwkew";
    map<int, char> mp;
    int n = arr.size();
    int i = 0;
    int j = 0;
    int maxi = INT_MIN;
    while (j < n)
    {
        mp[arr[j]]++;
        // if (mp.size() > j - i + 1)
        // {
        //     j++;
        // }
        if (mp.size() == j - i + 1)
        {
            maxi = max(j - i + 1, maxi);
            j++;
        }
        else if (mp.size() < j - i + 1)
        {
            while (mp.size() < j - i + 1)
            {

                mp[arr[i]]--;
                if (mp[arr[i]] == 0)
                {
                    mp.erase(arr[i]);
                }
                ++i;
            }
            j++;
        }
    }
    cout << maxi;
    return 0;
}