#include <bits/stdc++.h>

using namespace std;
void solve(vector<int> &v, int k, int index)
{
    if (v.size() == 1)
    {
        cout << v[0];
        return;
    }
    index = (index + k) % v.size();
    v.erase(v.begin() + index);
    solve(v, k, index);
}
int main()
{
    int n = 14;
    int k = 2;
    k--;

    int index = 0;
    // int ans = -1;

    vector<int> arr;

    for (int i = 1; i <= n; i++)
    {
        arr.push_back(i);
    }
    solve(arr, k, index);

    // cout << ans;
    return 0;
}