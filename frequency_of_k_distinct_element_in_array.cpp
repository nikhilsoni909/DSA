#include <bits/stdc++.h>
#define vi vector<int>
#define pi pair<int, int>
#define vii vector<pi>
#define rep(i, a, n) for (int i = a; i < n; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vi a(n);

    rep(i, 0, n)
    {
        cin >> a[i];
    }
    map<int, int> freq;
    rep(i, 0, n)
    {
        int presentsize = freq.size();
        if (freq[a[i]] == 0 && presentsize == k)
        {
            break;
        }
        freq[a[i]]++;
    }
    vii ans;
    map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); it++)
    {
        if (it->ss != 0)
        {
            pi p;
            p.ff = it->ss;
            p.ss = it->ff;
            ans.push_back(p);
        }
    }
    sort(ans.begin(), ans.end(), greater<pi>());
    vii::iterator it1;
    for (it1 = ans.begin(); it1 != ans.end(); it1++)
    {
        cout << it1->ss << " " << it1->ff << endl;
    }

    return 0;
}