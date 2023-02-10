#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int i = 0;
    int j = 0;
    int k = 2;
    int sum = 0;
    int maxi = INT_MIN;
    // sliding window
    while (j < n)
    {
        sum += arr[j];

        if (j - i + 1 < k)
        { // sum of i and j less then size of window

            j++;
        }
        else
        {

            maxi = max(maxi, sum);
            sum -= arr[i];
            cout << sum << endl;
            j++;
            i++;
        }
    }
    cout << maxi;
    return 0;
}