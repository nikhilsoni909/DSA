#include <bits/stdc++.h>

using namespace std;
int static t[100][100];
int lcs(string x, string y, int n, int m)
{

    if (n == 0 || m == 0)
    {
        return 0;
    }
    if (t[n][m] != -1)
    {
        return t[n][m];
    }

    if (x[n - 1] == y[m - 1])
    {
        return t[n][m] = 1 + lcs(x, y, n - 1, m - 1);
    }
    else
    {

        return t[n][m] = max(lcs(x, y, n, m - 1), lcs(x, y, n - 1, m));
    }
}
int main()
{
    string x = "AEDFHR ";
    string y = "ABCDGH";
    int n = x.size();
    int m = y.size();
    memset(t, -1, sizeof(t));

    cout << lcs(x, y, n, m);
    return 0;
}