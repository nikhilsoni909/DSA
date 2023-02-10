#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k = 3;
    string arr = "aabacbebebe";
    map<int, char> mp;
    int n = arr.size();
    int i = 0;
    int j = 0;
    int maxi = INT_MIN;
    while (j < n)
    {
        mp[arr[j]]++;
        if (mp.size() < k)
        {
            j++;
        }
        else if (mp.size() == k)
        {
            maxi = max(j - i + 1, maxi);
            j++;
        }
        else if (mp.size() > k)
        {
            while (mp.size() > k)
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