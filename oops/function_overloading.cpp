#include <iostream>

using namespace std;
class nikhil
{
public:
    void func1()
    {
        cout << "i am function with no arguments" << endl;
    }
    void func1(int a)
    {

        cout << "i am func2" << endl;
    }
    void func1(double a)
    {
        cout << "i am function 2" << endl;
    }
};
int main()
{
    nikhil a;
    a.func1();
    a.func1(1);
    a.func1(2.23);

    return 0;
}