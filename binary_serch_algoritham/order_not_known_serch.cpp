#include <iostream>

using namespace std;
int accending(int arr[], int key, int low, int high)
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
int descending(int arr[], int key, int low, int high)
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
    int n = 3;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    if (arr[0] < arr[6])
    {
        cout << accending(arr, n, 0, 6);
    }
    else
    {
        cout << descending(arr, n, 0, 6);
    }
    return 0;
}