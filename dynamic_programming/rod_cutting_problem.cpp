#include <bits/stdc++.h>

using namespace std;
int t[100][1000];
int rodcutting(int length[], int price[], int w, int n)
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
            if (length[i - 1] <= j)
            {
                t[i][j] = max(price[i - 1] + t[i][j - length[i - 1]], t[i - 1][j]);
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
    int length[] = {1, 2, 3, 4, 5};
    int price[] = {4, 6, 8, 10, 9};
    int n = 5;
    int M = 8;
    // ans should be 27
    // memset(t, -1, sizeof(t));
    cout << rodcutting(length, price, M, n);

    return 0;
}