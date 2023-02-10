#include <bits/stdc++.h>

using namespace std;
int t[100][1000];
int knapsaek(int wt[], int w, int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (j == 0)
            {
                t[i][j] = 0;
            }
            if (i == 0)
            {
                t[i][j] = INT_MAX - 1;
            }
        }
    }
    for (int j = 1; j <= w; j++)
    {
        if (j / wt[0] == 0)
        {
            t[1][j] = j / wt[0];
        }
        else
        {
            t[1][j] = INT_MAX - 1;
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < w + 1; j++)
        {
            if (wt[i - 1] <= j)
            {
                t[i][j] = min(t[i][j - wt[i - 1]] + 1, t[i - 1][j]);
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
    int wt[] = {9, 6, 5, 1};
    int n = 4;
    int w = 11;

    cout << knapsaek(wt, w, n);

    return 0;
}