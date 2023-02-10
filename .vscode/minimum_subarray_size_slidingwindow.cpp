#include <iostream>

using namespace std;

int smallestsubarraysum(int arr[], int n, int x)
{
    int sum = 0, minlength = n + 1;
    int start = 0, end = 0;
    while (end < ṣ n)
    {
        while (sum <= x && end < n)
        {
            sum += arr[end++];
        }
        while (sum > x && start < n)
        {
            if (end - start < minlength)
            {
                minlength = end - start;
            }
            sum -= arr[start++];
        }
    }
    return minlength;
}
int main()
{
    int arr[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n = 6;

    int minlength = smallestsubarraysum(arr, n, x);
    cout << minlength << endl;

    return 0;
}