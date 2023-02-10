#include <iostream>

using namespace std;
class student
{
public:
    string name;
    int age;
    bool gender;
    void setvalue()
    {

        cout << "name=" << name << endl
             << " age=" << age << endl
             << "gender=" << gender << endl;
    }
};
int main()
{
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "name" << endl;
        cin >> arr[i].name;
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