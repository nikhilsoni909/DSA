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
    int arr[] = {
        1,
        2,
        3,
        4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; // let it is an  infinite array
    int low = 0;
    int high = 1;
    while (n > arr[high])
    {
        low = high;
        high *= 2;
    }
    cout << serch1(arr, n, low, high);
    return 0;
}