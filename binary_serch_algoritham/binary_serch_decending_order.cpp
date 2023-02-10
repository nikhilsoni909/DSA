#include <iostream>

using namespace std;
int serch1(int arr[], int key, int low, int high)
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
    int arr[] = {7, 6, 5, 4, 3, 2, 1};
    cout << serch1(arr, n, 0, 6);
    return 0;
}