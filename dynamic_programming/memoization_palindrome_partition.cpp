#include <bits/stdc++.h>
int static t[100][100];
using namespace std;
bool ispalindrome(string s, int i, int j)
{
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int solve(string s, int i, int j)
{
    if (i >= j)
    {
        return 0;
    }
    if (ispalindrome(s, i, j))
    {
        return 0;
    }

    if (t[i][j] != -1)
    {
        return t[i][j];
    }
    int mn = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        int temp = solve(s, i, k) + solve(s, k + 1, j) + 1;
        if (temp < mn)
        {
            mn = temp;
        }
    }
    return t[i][j] = mn;
}

int main()
{
    string s = "ababbbabbababa";
    memset(t, -1, sizeof(t));
    int n = s.size();
    int i = 0;
    int j = n - 1;
    cout << solve(s, i, j);
    return 0;
}