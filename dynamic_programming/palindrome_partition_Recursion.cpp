#include <iostream>
#include <limits.h>

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
    int mn = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        int temp = solve(s, i, k) + solve(s, k + 1, j) + 1;
        if (temp < mn)
        {
            mn = temp;
        }
    }
    return mn;
}

int main()
{
    string s = "ababbbabbababa";
    int n = s.size();
    int i = 0;
    int j = n - 1;
    cout << solve(s, i, j);
    return 0;
}