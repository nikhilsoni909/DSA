#include <bits/stdc++.h>

using namespace std;

vector<int> cutTheSticks(vector<int> &arr)
{
    int mini = INT_MAX;

    vector<int> ans;
    ans.push_back(arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        mini = min(mini, arr[i]);
    }
    cout << mini << endl;
    int count = arr.size();
    for (int j = 0; j < arr.size(); j++)
    {
        arr[j] -= mini;
        // cout << arr[j] << endl;
        if (arr[j] <= 0)
        {
            count--;
        }
        cout << arr[j];
    } 
    ans.push_back(count);

    return ans;
}

int main()
{
    vector<int> t = {5, 4, 4, 2, 2, 8};
    vector<int> ans = cutTheSticks(t);

    return 0;
}