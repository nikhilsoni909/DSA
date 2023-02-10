#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}