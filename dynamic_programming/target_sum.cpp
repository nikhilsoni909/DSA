#include <bits/stdc++.h>
// this problem is similar to count of subsset diff problem but we have to give some comditions for test cases
using namespace std;
int t[100][1000];
int countsubsetsum(int arr[], int target, int n)
{
    int sum, sumarr = 0;
    for (int i = 0; i < n; i++)
    {
        sumarr += arr[i];
    }
    if (sumarr < abs(target) || (target + sumarr) % 2 != 0)
    {
        return 0;
    }
    sum = (target + sumarr) / 2;

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
        for (int j = 0; j < sum + 1; j++)
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
    int arr[] = {0, 0, 0, 1};
    int target = 1;
    int n = 4;
    cout << countsubsetsum(arr, target, n);
    return 0;
}