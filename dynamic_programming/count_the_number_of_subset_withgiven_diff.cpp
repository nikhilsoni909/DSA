#include <bits/stdc++.h>

using namespace std;
int t[100][1000];
int countsubsetsum(int arr[], int diff, int n)
{
    int sum, sumarr = 0;
    for (int i = 0; i < n; i++)
    {
        sumarr += arr[i];
    }

    sum = (diff + sumarr) / 2;

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
            {
                t[i][j] = 0;
            }
            if (j == 0)
            {

                t[i][j] = 1;
            }
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {

                t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j];
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
    int arr[] = {1, 1, 2, 3};
    int diff = 1;
    int n = 4;
    cout << countsubsetsum(arr, diff, n);
    return 0;
}