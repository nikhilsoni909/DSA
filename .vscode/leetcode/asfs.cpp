#include <bits/stdc++.h>

using namespace std;
vector<int> topKFrequent(vector<int> &nums, int k)
{
    vector<int> ans(k);
    unordered_map<int, int> mp;
    for (auto i : nums)
    {                                       
        mp[i]++;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minh;
    for (auto i : mp)
    {
        minh.push({i.second, i.first});
        if (minh.size() > k)
        {
            minh.pop();
        }
    }
    for (int i = k - 1; i >= 0; i--)
    {
        auto it = minh.top();
        ans[i] = it.second;
        minh.pop();
    }
    return ans;
}
int main()
{
    vector<int> a = {1, 1, 1, 2, 2, 3};

    cout << topKFrequent(a, 2)[0];
    cout << topKFrequent(a, 2)[1];

    return 0;
}