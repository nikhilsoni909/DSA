#include <iostream>

using namespace std;
int binary_serch(int arr[], int n, int a)
{
    int s = 0;
    int e = n - 1;
    while (e >= s)
    {
        int mid = (s + e) / 2;
        if (a == arr[mid])
        {
            return mid;
        }
        else if (a < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    {
        return -1;
    }
}
int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", n);
    cout << binary_serch(arr, n, 6);

    return 0;
}