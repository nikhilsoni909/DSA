#include <iostream> //rani's monthly pocket money is 3000 and she is note allowed to go outside on even days and she can go outside only if she has some money
using namespace std;
int main()
{
    int pocetmoney = 3000;
    for (int date = 1; date <= 30; date++)
    {
        cout << "day " << date << endl;
        if (date % 2 == 0)
        {
            continue;//this will skip to the next iteration of the loop
        }
        if (pocetmoney==0)
        {
            break; //this will terminate the loop
        }
        
        cout<<"going out today\n";
     pocetmoney=pocetmoney-300;   
    }

    return 0;
}