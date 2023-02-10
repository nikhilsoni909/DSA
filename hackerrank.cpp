#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector<int> arr)
{
    int ans[100] = {};
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        ans[arr[i]]++;
    }
    for (int i = 0; i < 100; i++)
    {
        maxi = max(maxi, ans[i]);
    }
    cout << maxi;

    return 0;
}

int main()
{
    vector<int> arr = {3, 3, 2, 1, 3};
    equalizeArray(arr);
    return 0;
}