#include <iostream>

using namespace std;
int serch1(int arr[], int key, int low, int high)
{
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (key == arr[mid])
        {
            return arr[mid];
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
    if (abs(arr[low] - key) > abs(arr[high] - key))
    {
        return arr[high];
    }
    return arr[low];
}
int main()
{
    int n = 3;
    int arr[] = {1, 2, 2, 2, 5, 6, 7};
    cout << serch1(arr, n, 0, 6);
    return 0;
}