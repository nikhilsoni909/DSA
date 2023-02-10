#include <bits/stdc++.h>

using namespace std;
int t[100][100];
string lcs(string x, string y, int n, int m)
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
    string s = "";
    int i = n;
    int j = m;
    while (i > 0 && j > 0)
    {
        if (x[i - 1] == y[j - 1])
        {
            s.push_back(x[i - 1]);
            i--;
            j--;
        }
        else
        {
            if (t[i][j - 1] > t[i - 1][j])
            {
                j--;
            }
            else
            {
                i--;
            }
        }
    }
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    string x = "abcdgh";
    string y = "aedfhr";
    int n = x.size();
    int m = y.size();

    cout << lcs(x, y, n, m);
    return 0;
}