#include <iostream>

using namespace std;
int serch1(char arr[], char key, int low, int high)
{
    char result;
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (key == arr[mid])
        {
            high = mid + 1;
        }

        if (arr[mid] > key)
        {
            result = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}
int main()
{
    char n = 'c';
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    cout << arr[serch1(arr, n, 0, 6)];
    return 0;
}