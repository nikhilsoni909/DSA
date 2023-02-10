#include <bits/stdc++.h>

using namespace std;
int lcs(string x, string y, int n, int m)
{

    if (n == 0 || m == 0)
    {
        return 0;
    }
    if (x[n - 1] == y[m - 1])
    {
        return 1 + lcs(x, y, n - 1, m - 1);
    }
    else
    {

        return max(lcs(x, y, n, m - 1), lcs(x, y, n - 1, m));
    }
}
int main()
{
    string x = "abcde";
    string y = "abdce";
    int n = x.size();
    int m = y.size();
    cout << lcs(x, y, n, m);
    return 0;
}