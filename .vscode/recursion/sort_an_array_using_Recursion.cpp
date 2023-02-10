#include <bits/stdc++.h>

using namespace std;
void insertsort(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] <= temp)
    {
        v.push_back(temp);
        return;
    }
    int val = v[v.size() - 1];
    v.pop_back();
    insertsort(v, temp);
    v.push_back(val);
}
void sortv(vector<int> &v)
{
    if (v.size() == 1)
    {
        return;
    }
    int temp = v[v.size() - 1];
    v.pop_back();
    sortv(v);
    insertsort(v, temp);
}
int main()
{
    vector<int> arr = {2, 3, 4, 5, 1, 2};
    sortv(arr);

    for (auto i : arr)
    {
        cout << i << endl;
    }
    return 0;
}