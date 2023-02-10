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
bool sequencematch(string x, string y, int n, int m)
{
    if (lcs(x, y, n, m) == n)
    {
        return true;
    }
    return false;
}
int main()
{
    string x = "abc";
    string y = "abdce";
    int n = x.size();
    int m = y.size();
    cout << sequencematch(x, y, n, m);
    return 0;
}