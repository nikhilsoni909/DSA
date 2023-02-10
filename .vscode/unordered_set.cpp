#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> a;
    // unorder set are just similar to set but it is implement through hasing
    // and elements in this unordered_set are unordered means not sorted
    // they dont have any concept of upper and lower bound
    // do duplicate elemets are allowed
    a.insert(2);
    a.insert(1);
    a.insert(10);
    a.insert(2);
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
    // // for printing in reverse order
    // cout << endl;
    // for (auto i = a.rbegin(); i != a.rend(); i++)
    // {
    //     cout << *i << " ";
    // }
    // this will not work for unordered set reverse printing
    // will work for set
    cout << endl;
    cout << a.size();

    return 0;
}