#include <bits/stdc++.h>

using namespace std;
int t[100][1000];
int knapsaek(int wt[], int val[], int w, int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < w + 1; j++)
        {
            if (wt[i - 1] <= j)
            {
                t[i][j] = max(val[i - 1] + t[i][j - wt[i - 1]], t[i - 1][j]);
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][w];
}
int main()
{
    int wt[] = {4, 8, 2, 4, 2};
    int val[] = {4, 6, 8, 10, 9};
    int n = 5;
    int w = 8;
    // ans should be 27
    // memset(t, -1, sizeof(t));
    cout << knapsaek(wt, val, w, n);

    return 0;
}