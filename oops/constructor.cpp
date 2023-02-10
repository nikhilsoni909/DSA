#include <iostream>

using namespace std;
class student
{
    string name;

public:
    int age;
    bool gender;
    student()
    {

        cout << "default constructor called";
    }
    student(student &a)
    {
        cout << "copy constructor called" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    student(string n, int a, bool g)
    {
        cout << "parameterized constructor called" << endl;
        name = n;
        age = a;
        gender = g;
    }
    void setvalue()
    {

        cout << "name=" << name << endl
             << " age=" << age << endl
             << "gender=" << gender << endl;
    }
    ~student()
    {
        cout << "destructor called" << endl;
    }
};
int main()
{
    student c("niki", 12, 1);
    c.setvalue();
    student a;
    student b = a;
    return 0;
}