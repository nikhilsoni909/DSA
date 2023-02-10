#include <bits/stdc++.h>

using namespace std;
int t[100][1000];
int knapsaek(int wt[], int val[], int w, int n)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (t[n][w] != -1)
    {
        return t[n][w];
    }
    if (wt[n - 1] <= w)
    {
        return t[n][w] = max(val[n - 1] + knapsaek(wt, val, w - wt[n], n - 1), knapsaek(wt, val, w, n - 1));
    }
    else if (wt[n - 1] > w)
    {
        return t[n][w] = knapsaek(wt, val, w, n - 1);
    }
}
int main()
{
    int wt[] = {4, 8, 2, 4, 2};
    int val[] = {4, 6, 8, 10, 9};
    int n = 5;
    int w = 8;
    // ans should be 27
    memset(t, -1, sizeof(t));
    cout << knapsaek(wt, val, w, n);

    return 0;
}