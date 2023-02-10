#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int, greater<int>> a; // custorm competator
    a.insert(2);
    a.insert(1);
    a.insert(10);
    a.insert(2);
    for (auto i : a)
    {
        cout << i << " ";
    }

    return 0;
}