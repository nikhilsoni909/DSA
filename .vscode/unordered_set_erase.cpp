#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> a;
    a.insert(2);
    a.insert(1);
    a.insert(10);
    a.insert(2);
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    a.erase(a.begin());
    a.erase(10);
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}