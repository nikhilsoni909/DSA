#include <bits/stdc++.h>

using namespace std;
int t[100][1000];
int subsetsum(int arr[], int sum, int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum / 2; j++)
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
    vector<int> v;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum / 2; j++)
        {
            if (arr[i - 1] <= j)
            {

                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
            if (t[n][j] == true)
            {
                v.push_back(j);
            }
        }
    }

    int mn = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        mn = min(mn, sum - 2 * v[i]);
        cout << v[i] << endl;
    }
    return mn;
}
int main()
{
    int wt[] = {1, 2, 7};
    int n = 3;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += wt[i];
    }

    //  cout << sum;
    cout << subsetsum(wt, sum, n);
    return 0;
}