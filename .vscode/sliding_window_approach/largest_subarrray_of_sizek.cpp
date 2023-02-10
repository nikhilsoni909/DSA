#include <bits/stdc++.h>

using namespace std;
    
int main()
{
    int k = 12;
    vector<int> arr = {1, 2, 3, 7, 5};
    int n = arr.size();
    int sum = 0;
    int i = 0;
    int j = 0;
    int maxi = 0;
    while (j < n)
    {
        sum = sum + arr[j];

        if (sum < k)
        {
            j++;
        }
        else if (sum == k)
        {
            maxi = max(j - i + 1, maxi);
            j++;
        }
        else if (sum > k)
        {
            sum = sum - arr[i] - arr[j];
            ++i;
        } 
    }
    cout << maxi;
    return 0;
}