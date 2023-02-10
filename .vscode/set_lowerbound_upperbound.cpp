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
    cout << *a.lower_bound(3);
    // lowerbound means greater than or equal to that value
    // upperbound means greater than that value
    cout << endl;
    cout << *a.lower_bound(1) << endl;
    cout << *a.upper_bound(1) << endl;
    cout << *a.upper_bound(2) << endl;
    cout << *a.lower_bound(11) << endl;     //==a.end()
    cout << *a.upper_bound(10) << endl;     //==a.end()
    cout << (a.upper_bound(10) == a.end()); // but there is no elemetn  which is greater than 10 so it wil return a.end();
    // this will give true
}