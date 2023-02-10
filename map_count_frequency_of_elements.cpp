#include <bits/stdc++.h>
#define vi vector<int>
#define ff first
#define ss second
#define rep(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int main()
{

    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // map<int, int> freq;

    // rep(i, 0, n)
    // {
    //     freq[a[i]]++;
    // }
    // map<int, int>::iterator it;
    // for (it = freq.begin(); it != freq.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl; //*it.second<<endl;
    // }

    unordered_map<int, int> freq;

    rep(i, 0, n)
    {
        freq[a[i]]++;
    }
    unordered_map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); it++)
    {
        cout << it->first << " " << it->second << endl; //*it.second<<endl;
    }

    return 0;
}