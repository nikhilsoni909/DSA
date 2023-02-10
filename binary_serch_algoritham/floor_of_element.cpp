#include <iostream>

using namespace std;
int serch1(int arr[], int key, int low, int high)
{
    int result;
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
            result = arr[mid];
            low = mid + 1;
        }
    }
    return result;
}
int main()
{
    int n = 3;
    int arr[] = {0, 1, 2, 4, 5, 6, 7};
    cout << serch1(arr, n, 0, 6);
    return 0;
}