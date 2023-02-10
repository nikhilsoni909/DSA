#include <iostream>
#include <set>
using namespace std;

int main()
{
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

    //    a.erase(2); // all the 2s will get erased

    a.erase(a.find(2)); // it will delete only one 2
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}