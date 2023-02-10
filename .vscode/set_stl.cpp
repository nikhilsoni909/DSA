#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> a;
    a.insert(2);
    a.insert(1);
    a.insert(10);
    a.insert(2);
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i = a.begin(); i != a.end(); i++)
    {
        cout << *i << " ";
    }
    // for printing in reverse order
    cout << endl;
    for (auto i = a.rbegin(); i != a.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    cout << a.size();

    return 0;
}