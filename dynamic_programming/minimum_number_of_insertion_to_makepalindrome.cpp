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
int minimum_insertion(string x, int n)
{
    string main = x;
    reverse(x.begin(), x.end());
    int palindrome = lcs(main, x, n, n);
    return (n - palindrome);
}
int main()
{
    string x = "aa";

    int n = x.size();

    cout << minimum_insertion(x, n);
    return 0;
}