#include <iostream>

using namespace std;
int serch1(int arr[], int key, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (key == arr[mid])
        {
            return mid;
        }

        if (arr[mid] > key)
        {
            return serch1(arr, key, low, mid - 1);
        }
        return serch1(arr, key, mid + 1, high);
    }
    return -1;
}
int main()
{
    int n = 3;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int sizee = sizeof(arr) / sizeof(arr[0]);
    cout << serch1(arr, n, 0, 6);
    return 0;
}