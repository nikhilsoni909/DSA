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

int main()
{
    int n = 1;
    int arr[] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}; // let it is an  infinite array
    int low = 0;
    int high = 1;
    while (n  arr[high])
    {
        low = high;
        high *= 2;
    }
    cout << firstserch1(arr, n, low, high);
    return 0;
}