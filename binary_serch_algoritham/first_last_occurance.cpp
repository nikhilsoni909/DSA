#include <iostream>

using namespace std;
int firstserch1(int arr[], int key, int low, int high)
{
    int result = -1;
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (key == arr[mid])
        {
            result = mid;
            high = mid - 1;
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
    return result;
}
int lastserch1(int arr[], int key, int low, int high)
{
    int result = -1;
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (key == arr[mid])
        {
            result = mid;
            low = mid + 1;
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
    return result;
}
int main()
{
    int n = 4;
    int arr[] = {7, 4, 4, 4, 4, 2, 1};
    cout << firstserch1(arr, n, 0, 6);
    cout << lastserch1(arr, n, 0, 6);

    return 0;
}