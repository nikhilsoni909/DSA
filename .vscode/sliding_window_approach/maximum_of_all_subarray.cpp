#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> ans;
    list<int> l;
    int n = 8;
    int i = 0;
    int j = 0;
    int k = 3;
    int sum = 0;
    int maxi = INT_MIN;
    // sliding window
    while (j < n)
    {
        while (l.size() > 0 && l.back() < arr[j])
        {
            l.pop_back();
        }
        l.push_back(arr[j]);
        if (j - i + 1 < k)
        { // sum of i and j less then size of window

            j++;
        }
        else
        {

            ans.push_back(l.front());
            j++;
            if (l.front() == i)
            {
                l.pop_front();
            }
            i++;
        }
    }
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}