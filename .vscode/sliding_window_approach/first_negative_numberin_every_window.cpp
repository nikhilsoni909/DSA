#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, -2, 3, -4, -5, 6, 7, 8};
    int n = 8;
    int i = 0;
    int j = 0;
    int k = 2;
    list<int> l;
    // sliding window
    while (j < n)
    {
        if (arr[j] < 0)
        {
            l.push_back(arr[j]);
        }

        if (j - i + 1 < k)
        { // sum of i and j less then size of window

            j++;
        }
        else
        {
            if (l.empty())
            {
                cout << "0 ";
            }
            else
            {
                cout << l.front() << " ";
                if (arr[i] == l.front())
                    l.pop_front();
            }
            j++;
            i++;
        }
    }
    return 0;
}