#include <bits/stdc++.h>

using namespace std;
class cal
{
public:
    int a;
    int b;
    int o;
    void input()
    {
        cout << "enter :" << endl;
        cin >> a >> b;
        menu();
    }
    void menu();
};
void cal ::menu()
{
    cout << "op " << endl;
    cout << "enter 1 for add 2 for  sub 3 for divide 4 for mul" << endl;
    cin >> o;
    switch (o)
    {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout << a - b;
        break;
    case 4:
        cout << a * b;
        break;
    case 3:
        cout << a / b;
        break;
    default:
        cout << "asflsd";
    }
}

int main()
{
    cal x;
    x.input();

    return 0;
}