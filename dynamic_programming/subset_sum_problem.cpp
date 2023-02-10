#include <bits/stdc++.h>

using namespace std;
int t[100][1000];
int subsetsum(int arr[], int sum, int n)
{
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
    int wt[] = {4, 7, 6, 4, 2};
    int sum = 8;
    int n = 5;
    cout << subsetsum(wt, sum, n);
    return 0;
}