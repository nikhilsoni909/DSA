#include <iostream>
using namespace std;
class greatest_num
{
private:
    int a, b, c;

public:
    void setnum()
    {
        cout << "enter 3 numbers:"<< endl;
        cin >> a >> b >> c;
    }
    void greatest()
    {
        if (a >= b)
        {

            if (a >= c)
            {
                printf("%d is greatest \n", a);
            }
            else
                printf("%d is greatest \n", c);
        }
        else if (b >= c)
        {
            printf("%d is greatest \n", b);
        }

        else
            printf("%d is greatest \n", c);
    }
};
int main(){
greatest_num v;
v.setnum();
v.greatest();


}