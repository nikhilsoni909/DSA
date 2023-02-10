#include <iostream>

using namespace std;
class student
{
    string name;

public:
    int age;
    bool gender;

    void setvalue()
    {

        cout << "name=" << name << endl
             << " age=" << age << endl
             << "gender=" << gender << endl;
    }
    void setname(string s)
    {
        name = s;
    }
};
int main()
{
    student arr[3];
    string s[3];
    for (int i = 0; i < 3; i++)
    {

        cout << "name" << endl;
        cin >> s[i];
        arr[i].setname(s[i]);
        cout << "age";
        cin >> arr[i].age;
        cout << "gender";
        cin >> arr[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        arr[i].setvalue();
    }

    return 0;
}