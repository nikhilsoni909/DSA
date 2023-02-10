#include <iostream>

using namespace std;
int catalan(int n)
{
    int res;
    if (n >= 1)
    {
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        res += catalan(i) * catalan(n - i - 1);
    }
    return res;
}
int main()
{
    cout << catalan(3);
    return 0;
}