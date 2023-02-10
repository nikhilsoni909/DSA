#include <iostream>

using namespace std;
// [capture list](parameter)->return type;{

// };
// this is lamda function

// it is not necessary to give return type compailer will autometicly give it
// we can store its value in a function;

auto func = []()
{
    cout << "hello wrold";
};

// call lamda funciton directly after defination
// []()
// {
//     cout << "hello uncle";
// }();

// calling lamda function directly by parameter paste this in the main function
// [](int a, int b)
// {
//     cout << "hello world1";
//     cout << a + b;
// }(12, 34);
int main()
{
    func();

    //  callling lamda function directly in main function
    [](int a, int b)
    {
        cout << "hello world1";
        cout << a + b;
    }(12, 34);

    // with return type and value
    auto c = [](int a, int b) // if we directly call the function  then auto c will act as variable which stores the return data of function
    {
        return a + b;
    }(12, 34);

    cout << c;
    // by using capture list lamda function can access the element outside tha lamda function
    // for examle
    int x{1}, y{2}; // these are two variables outside the lamda function
    // so we can acces them in lamda function by capture list
    cout << endl;
    auto func2 = [x, y]()
    {
        cout << "x+y is"
             << ":" << x + y << endl;
        return x;
    };

    func2();
    cout << func2()
         << endl;

    return 0;
}