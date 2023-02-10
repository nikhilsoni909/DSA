#include <bits/stdc++.h>

using namespace std;
int bitonic(vector<int> arr, int key, int low, int high)
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
int dec(vector<int> arr, int key, int low, int high)
{
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (key == arr[mid])
        {
            return mid;
        }

        if (arr[mid] > key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int inc(vector<int> arr, int key, int low, int high)
{
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (key == arr[mid])
        {
            return mid;
        }

        if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n = 3;
    vector<int> arr = {1, 2, 3, 4, 17, 6, 5};
    int ele = bitonic(arr, n, 0, 6);
    cout << inc(arr, n, 0, ele - 1) << endl;
    cout << dec(arr, n, ele, 6);
    return 0;
}