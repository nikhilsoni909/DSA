#include <bits/stdc++.h>

using namespace std;
int t[100][100];
int lcs(string x, string y, int n, int m)
{

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (n == 0 || m == 0)
            {
                t[j][i] = 0;
            }
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (x[i - 1] == y[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else
            {

                t[i][j] = max(t[i][j - 1], t[i - 1][j]);
            }
        }
    }
    return t[n][m];
}
void min_ins_dlt(string x, string y, int n, int m)
{
    int ins = n - lcs(x, y, n, m);
    int del = m - lcs(x, y, n, m);
    cout << ins << " " << del;
}
int main()
{
    string x = "geeksforgeeks";
    string y = "geeks";
    int n = x.size();
    int m = y.size();

    min_ins_dlt(x, y, n, m);
    return 0;
}