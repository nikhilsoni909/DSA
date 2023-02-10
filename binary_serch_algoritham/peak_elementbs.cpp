#include <bits/stdc++.h>

using namespace std;
int serch1(vector<int> &arr, int key, int low, int high)
{
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (mid > 0 && mid < arr.size() - 1)
        {
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                return mid;
            }
            else if (arr[mid - 1] > arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (mid == 0)
        {
            if (arr[mid] > arr[mid + 1])
            {
                return mid;
            }
            else
            {
                return mid + 1;
            }
        }

        else if (mid == arr.size() - 1)
        {
            if (arr[arr.size() - 1] > arr[arr.size() - 2])
            {
                return arr.size() - 1;
            }
            else
            {
                return arr.size() - 2;
            }
        }
    }
}
int main()
{
    int n = 3;
    vector<int> arr = {1, 2, 3, 4, 17, 6, 7};
    cout << serch1(arr, n, 0, 6);
    return 0;
}