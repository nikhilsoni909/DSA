#include <bits/stdc++.h>

using namespace std;
int t[100][1000];
int sumpartition(int arr[], int sum, int n)
{
    long sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i];
    }
    if (sum1 % 2 != 0)
    {
        return false;
    }
    sum /= 2;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
            {
                t[i][j] = false;
            }
            if (j == 0)
            {

                t[i][j] = true;
            }
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {

                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][sum];
}
int main()
{
    int arr[] = {4, 5, 2, 8, 3};
    int sum = 8;
    int n = 5;
    cout << sumpartition(arr, sum, n);
    return 0;
}