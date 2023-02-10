#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> dict(256, -1);
    int maxl = 0;
    int start = -1;
    for (int i = 0; i < s.size(); i++)
    {
        cout << dict[s[i]] << endl;
        if (dict[s[i]] > start)
        {

            start = dict[s[i]];
            cout << "if" << dict[s[i]] << endl;
        }
        cout << dict[s[i]] << endl;
        dict[s[i]] = i;
        cout << dict[s[i]] << endl;

        maxl = max(maxl, i - start);
    }
    cout << maxl;
    return 0;
}