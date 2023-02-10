#include <bits/stdc++.h>

using namespace std;
int kthlargest(int a[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> p;
    for (int i = 0; i < k; i++)
    {
        p.push(a[i]);
    }
    for (int i = k; i < n; i++)
    {
        if (p.top() < a[i])
        {
            p.pop();
            p.push(a[i]);
        }
    }
    return p.top();
}
int main()
{
    int ar[] = {2, 5, 4, 8, 6, 9};
    int n = 6;
    int k = 3;
    cout << kthlargest(ar, n, k);

    return 0;
}