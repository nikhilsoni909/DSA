#include <bits/stdc++.h>

using namespace std;
int minindex(vector<int> arr, int key, int low, int high)
{
    int length = arr.size();
    if (arr[low] <= arr[high])
    {
        return low;
    }
    while (high >= low)
    {

        int mid = low + (high - low) / 2;
        int prev = (mid + length - 1) % length;
        int next = (mid + 1) % length;
        if (arr[mid] < arr[prev] && arr[mid] < arr[next])
        {
            return mid;
        }
        if (arr[mid] <= arr[prev]) // by some stranger
        {
            return mid;
        }
        if (arr[mid + 1] <= arr[mid]) // by some stranger
        {
            return mid + 1;
        }
        // rest of the code is by aditya
        if (arr[low] <= arr[mid])
        {
            low = mid + 1;
        }

        else if (arr[mid] <= arr[high])
        {
            high = mid - 1;
        }
    }
    return -1;
}
int serch1(vector<int> arr, int key, int low, int high)
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
int main()
{
    int n = 5;
    vector<int> arr = {7, 9, 11, 12, 5};
    if (arr[0] <= arr[4])
    {
        serch1(arr, n, 0, 4);
        return 0;
    }
    int minidx = minindex(arr, n, 0, 4);
    cout << serch1(arr, n, 0, minidx - 1) << endl;
    cout << serch1(arr, n, minidx, 4) << endl;

    return 0;
}