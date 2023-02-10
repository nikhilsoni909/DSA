#include <iostream>

using namespace std;
int serch1(int arr[], int key, int low, int high, int len)
{
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        int prev = (mid + len - 1) % len;//if mid is last elment or first elment so fancy way me likha hain bus bhai
        int next = (mid + 1) % len;

        if (key == arr[mid])
        {
            return mid;
        }
        if (key == arr[prev])
        {
            return prev;
        }
        if (key == arr[next])
        {
            return next;
        }

        if (arr[mid] > key)
        {
            low = mid + 2;
        }
        else
        {
            high = mid - 2;
        }
    }
    return -1;
}

int main()
{
    int n = 2;
    int arr[] = {7, 6, 4, 5, 3, 1, 2};
    cout << serch1(arr, n, 0, 6, 7);
    return 0;
}