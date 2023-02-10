#include <iostream>
#include <set>
using namespace std;

int main()
{
    // multiset is similar to set but it can contain duplicates
    // like 2 is repeating 2 times
    multiset<int> a;
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