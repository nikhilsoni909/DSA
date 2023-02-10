#include <iostream>

using namespace std;
class base
{
public:
    virtual void print()
    {
        cout << "print base class" << endl;
    }
    void display()
    {
        cout << "display base class" << endl;
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << "print derived class" << endl;
    }
    void display()
    {
        cout << "display derived class" << endl;
    }
};
int main()
{
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr->print();
    baseptr->display();
    return 0;
}