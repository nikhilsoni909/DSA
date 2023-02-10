#include <iostream>

using namespace std;
class student
{

public:
    string name;
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
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return 1;
        }
        return 0;
    }
};
int main()
{
    student c("niki", 12, 1);
    c.setvalue();
    student a;
    student b = c;
    if (c == b) // operator overloading
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "diffent";
    }

    return 0;
}