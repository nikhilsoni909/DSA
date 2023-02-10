#include <bits/stdc++.h>
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void heapify(vi &a, int n, int i)
{
    int maxidx = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && a[l] > a[maxidx])
    {
        maxidx = l;
    }
    if (r < n && a[r] > a[maxidx])
    {
        maxidx = r;
    }
    if (maxidx != i)
    {
        swap(a[i], a[maxidx]);
        heapify(a, n, maxidx);
    }
}
void heapsort(vi &a)
{
    int n = a.size();
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    for (int i = n - 1; i > 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}
signed main()
{
    int n;
    cin >> n;
    vi a(n);

    rep(i, 0, n)
    {
        cin >> a[i];
    }
    heapsort(a);
    rep(i, 0, n)
    {
        cout << a[i] << " ";    
    }
    return 0;
}