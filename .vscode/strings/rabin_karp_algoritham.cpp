#include <bits/stdc++.h>

using namespace std;
int p = 31;
const int N = 100007, m = 1000000007;
vector<long long> powers(N);
int main()
{
    string s = "na";
    string t = "apnacollagena";
    int T = t.size(), S = s.size();
    powers[0] = 1;
    for (int i = 1; i < N; i++)
    {
        powers[i] = (powers[i - 1] * p) % m;
    }

    vector<long long> h(T + 1, 0);
    for (int i = 0; i < T; i++)
    {
        h[i + 1] = (h[i] + (t[i] - 'a' + 1) * powers[i]) % m;
    }

    long long h_s = 0;
    for (int i = 0; i < S; i++)
    {
        h_s = (h_s + (s[i] - 'a' + 1) * powers[i]) % m;
    }
    for (int i = 0; i + S - 1 < T; i++)
    {
        long long cur_h = (h[i + S] - h[i] + m) % m;
        if (cur_h == (h_s * powers[i]) % m)
        {
            cout << "found at index " << i << endl;
        }
    }
    return 0;
}