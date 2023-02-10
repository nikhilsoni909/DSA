#include <iostream>

using namespace std;

int main()
{
    string s = "na";
    string t = "apna collagena";
    int S = s.size();
    int T = t.size();
    for (int i = 0; i < T - S + 1; i++)
    {
        if (t.substr(i, S) == s)
        {
            cout << "found at index"
                 << "[" << i << "]";
        }
    }

    return 0;
}