#include <iostream>
#include <string>
using namespace std;
bool sequencepattern(string a, string b)
{
    int i = a.length();
    int j = b.length();
    while (i >= 0 and j >= 0)
    {
        if (a[i] == b[j])
        {
            i--;
            j--;
        }
        else
        {
            j--;
        }
    }
    if (i < 0)
    {
        return true;
    }
    return false;
}
int main()
{
    string a = "abc";
    string b = "aaecy";
    cout << sequencepattern(a, b);
    return 0;
}