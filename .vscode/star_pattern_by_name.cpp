#include <bits/stdc++.h>
#define height 5
int width = ((2 * height) - 1);

using namespace std;
void printA()
{

    int n = width / 2, i, j;

    for (i = 0; i < height; i++)
    {

        for (j = 0; j <= width; j++)
        {

            if (j == n || j == (width - n)

                || (i == height / 2 && j > n

                    && j < (width - n)))

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";

        n--;
    }
}

// Function to print the pattern of 'B'

void printB()
{

    int i, j, half = (height / 2);

    for (i = 0; i < height; i++)
    {

        cout << "*";

        for (j = 0; j < width; j++)
        {

            if ((i == 0 || i == height - 1 || i == half)

                && j < (width - 2))

                cout << "*";

            else if (j == (width - 2)

                     && !(i == 0 || i == height - 1

                          || i == half))

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'C'

void printC()
{

    int i, j;

    for (i = 0; i < height; i++)
    {

        cout << "*";

        for (j = 0; j < (height - 1); j++)
        {

            if (i == 0 || i == height - 1)

                cout << "*";

            else

                continue;
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'D'

void printD()
{

    int i, j;

    for (i = 0; i < height; i++)
    {

        cout << "*";

        for (j = 0; j < height; j++)
        {

            if ((i == 0 || i == height - 1)

                && j < height - 1)

                cout << "*";

            else if (j == height - 1 && i != 0

                     && i != height - 1)

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'E'

void printE()
{

    int i, j;

    for (i = 0; i < height; i++)
    {

        cout << "*";

        for (j = 0; j < height; j++)
        {

            if ((i == 0 || i == height - 1)

                || (i == height / 2

                    && j <= height / 2))

                cout << "*";

            else

                continue;
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'F'

void printF()
{

    int i, j;

    for (i = 0; i < height; i++)
    {

        cout << "*";

        for (j = 0; j < height; j++)
        {

            if ((i == 0) || (i == height / 2

                             && j <= height / 2))

                cout << "*";

            else

                continue;
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'G'

void printG()
{

    int i, j;

    width--;

    for (i = 0; i < height; i++)
    {

        for (j = 0; j < width; j++)
        {

            if ((i == 0 || i == height - 1)

                && (j == 0 || j == width - 1))

                cout << " ";

            else if (j == 0)

                cout << "*";

            else if (i == 0 && j <= height)

                cout << "*";

            else if (i == height / 2

                     && j > height / 2)

                cout << "*";

            else if (i > height / 2

                     && j == width - 1)

                cout << "*";

            else if (i == height - 1

                     && j < width)

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'H'

void printH()
{

    int i, j;

    for (i = 0; i < height; i++)
    {

        cout << "*";

        for (j = 0; j < height; j++)
        {

            if ((j == height - 1)

                || (i == height / 2))

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'I'

void printI()
{

    int i, j;

    for (i = 0; i < height; i++)
    {

        for (j = 0; j < height; j++)
        {

            if (i == 0 || i == height - 1)

                cout << "*";

            else if (j == height / 2)

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'J'

void printJ()
{

    int i, j;

    for (i = 0; i < height; i++)
    {

        for (j = 0; j < height; j++)
        {

            if (i == height - 1 && (j > 0

                                    && j < height - 1))

                cout << "*";

            else if ((j == height - 1

                      && i != height - 1)

                     || (i > (height / 2) - 1

                         && j == 0 && i != height - 1))

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'K'

void printK()
{

    int i, j, half = height / 2, dummy = half;

    for (i = 0; i < height; i++)
    {

        cout << "*";

        for (j = 0; j <= half; j++)
        {

            if (j == abs(dummy))

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";

        dummy--;
    }
}

// Function to print the pattern of 'L'

void printL()
{

    int i, j;

    for (i = 0; i < height; i++)
    {

        cout << "*";

        for (j = 0; j <= height; j++)
        {

            if (i == height - 1)

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'M'

void printM()
{

    int i, j, counter = 0;

    for (i = 0; i < height; i++)
    {

        cout << "*";

        for (j = 0; j <= height; j++)
        {

            if (j == height)

                cout << "*";

            else if (j == counter

                     || j == height - counter - 1)

                cout << "*";

            else

                cout << " ";
        }

        if (counter == height / 2)
        {

            counter = -99999;
        }

        else

            counter++;

        cout << "\n";
    }
}

// Function to print the pattern of 'N'

void printN()
{

    int i, j, counter = 0;

    for (i = 0; i < height; i++)
    {

        cout << "*";

        for (j = 0; j <= height; j++)
        {

            if (j == height)

                cout << "*";

            else if (j == counter)

                cout << "*";

            else

                cout << " ";
        }

        counter++;

        cout << "\n";
    }
}

// Function to print the pattern of 'O'

void printO()
{

    int i, j, space = (height / 3);

    int width = height / 2 + height / 5 + space + space;

    for (i = 0; i < height; i++)
    {

        for (j = 0; j <= width; j++)
        {

            if (j == width - abs(space)

                || j == abs(space))

                cout << "*";

            else if ((i == 0

                      || i == height - 1)

                     && j > abs(space)

                     && j < width - abs(space))

                cout << "*";

            else

                cout << " ";
        }

        if (space != 0

            && i < height / 2)
        {

            space--;
        }

        else if (i >= (height / 2 + height / 5))

            space--;

        cout << "\n";
    }
}

// Function to print the pattern of 'P'

void printP()
{

    int i, j;

    for (i = 0; i < height; i++)
    {

        cout << "*";

        for (j = 0; j < height; j++)
        {

            if ((i == 0 || i == height / 2)

                && j < height - 1)

                cout << "*";

            else if (i < height / 2

                     && j == height - 1 && i != 0)

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'Q'

void printQ()
{

    printO();

    int i, j, d = height;

    for (i = 0; i < height / 2; i++)
    {

        for (j = 0; j <= d; j++)
        {

            if (j == d)

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";

        d++;
    }
}

// Function to print the pattern of 'R'

void printR()
{

    int i, j, half = (height / 2);

    for (i = 0; i < height; i++)
    {

        cout << "*";

        for (j = 0; j < width; j++)
        {

            if ((i == 0 || i == half)

                && j < (width - 2))

                cout << "*";

            else if (j == (width - 2)

                     && !(i == 0 || i == half))

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'S'

void printS()
{

    int i, j;

    for (i = 0; i < height; i++)
    {

        for (j = 0; j < height; j++)
        {

            if ((i == 0 || i == height / 2

                 || i == height - 1))

                cout << "*";

            else if (i < height / 2

                     && j == 0)

                cout << "*";

            else if (i > height / 2

                     && j == height - 1)

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'T'

void printT()
{

    int i, j;

    for (i = 0; i < height; i++)
    {

        for (j = 0; j < height; j++)
        {

            if (i == 0)

                cout << "*";

            else if (j == height / 2)

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'U'

void printU()
{

    int i, j;

    for (i = 0; i < height; i++)
    {

        if (i != 0 && i != height - 1)

            cout << "*";

        else

            cout << " ";

        for (j = 0; j < height; j++)
        {

            if (((i == height - 1)

                 && j >= 0

                 && j < height - 1))

                cout << "*";

            else if (j == height - 1 && i != 0

                     && i != height - 1)

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'V'

void printV()
{

    int i, j, counter = 0;

    for (i = 0; i < height; i++)
    {

        for (j = 0; j <= width; j++)
        {

            if (j == counter

                || j == width - counter - 1)

                cout << "*";

            else

                cout << " ";
        }

        counter++;

        cout << "\n";
    }
}

// Function to print the pattern of 'W'

void printW()
{

    int i, j, counter = height / 2;

    for (i = 0; i < height; i++)
    {

        cout << "*";

        for (j = 0; j <= height; j++)
        {

            if (j == height)

                cout << "*";

            else if ((i >= height / 2)

                     && (j == counter

                         || j == height - counter - 1))

                cout << "*";

            else

                cout << " ";
        }

        if (i >= height / 2)
        {

            counter++;
        }

        cout << "\n";
    }
}

// Function to print the pattern of 'X'

void printX()
{

    int i, j, counter = 0;

    for (i = 0; i <= height; i++)
    {

        for (j = 0; j <= height; j++)
        {

            if (j == counter

                || j == height - counter)

                cout << "*";

            else

                cout << " ";
        }

        counter++;

        cout << "\n";
    }
}

// Function to print the pattern of 'Y'

void printY()
{

    int i, j, counter = 0;

    for (i = 0; i < height; i++)
    {

        for (j = 0; j <= height; j++)
        {

            if (j == counter

                || j == height - counter

                       && i <= height / 2)

                cout << "*";

            else

                cout << " ";
        }

        cout << "\n";

        if (i < height / 2)

            counter++;
    }
}

// Function to print the pattern of 'Z'

void printZ()
{

    int i, j, counter = height - 1;

    for (i = 0; i < height; i++)
    {

        for (j = 0; j < height; j++)
        {

            if (i == 0 || i == height - 1

                || j == counter)

                cout << "*";

            else

                cout << " ";
        }

        counter--;

        cout << "\n";
    }
}
void printname(string name)
{
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == ' ' || name[i] == ' ')
        {
            cout << endl;
            cout << endl;
        }
        if (name[i] == 'A' || name[i] == 'a')
        {
            printA();
            cout << endl;
        }
        if (name[i] == 'B' || name[i] == 'b')
        {
            printB();
            cout << endl;
        }
        if (name[i] == 'C' || name[i] == 'c')
        {
            printC();
            cout << endl;
        }
        if (name[i] == 'd' || name[i] == 'D')
        {
            printD();
            cout << endl;
        }
        if (name[i] == 'E' || name[i] == 'e')
        {
            printE();
            cout << endl;
        }
        if (name[i] == 'f' || name[i] == 'F')
        {
            printF();
            cout << endl;
        }
        if (name[i] == 'g' || name[i] == 'G')
        {
            printG();
            cout << endl;
        }
        if (name[i] == 'h' || name[i] == 'H')
        {
            printH();
            cout << endl;
        }
        if (name[i] == 'I' || name[i] == 'i')
        {
            printI();
            cout << endl;
        }
        if (name[i] == 'j' || name[i] == 'J')
        {
            printJ();
            cout << endl;
        }

        if (name[i] == 'K' || name[i] == 'k')
        {
            printK();
            cout << endl;
        }
        if (name[i] == 'L' || name[i] == 'l')
        {
            printL();
            cout << endl;
        }
        if (name[i] == 'M' || name[i] == 'm')
        {
            printM();
            cout << endl;
        }
        if (name[i] == 'N' || name[i] == 'n')
        {
            printN();
            cout << endl;
        }
        if (name[i] == 'O' || name[i] == 'o')
        {
            printO();
            cout << endl;
        }
        if (name[i] == 'P' || name[i] == 'p')
        {
            printP();
            cout << endl;
        }
        if (name[i] == 'Q' || name[i] == 'R')
        {
            printQ();
            cout << endl;
        }
        if (name[i] == 'R' || name[i] == 'r')
        {
            printR();
            cout << endl;
        }
        if (name[i] == 'S' || name[i] == 's')
        {
            printS();
            cout << endl;
        }
        if (name[i] == 'T' || name[i] == 't')
        {
            printT();
            cout << endl;
        }
        if (name[i] == 'U' || name[i] == 'u')
        {
            printU();
            cout << endl;
        }
        if (name[i] == 'V' || name[i] == 'v')
        {
            printV();
            cout << endl;
        }
        if (name[i] == 'W' || name[i] == 'w')
        {
            printW();
            cout << endl;
        }
        if (name[i] == 'x' || name[i] == 'X')
        {
            printX();
            cout << endl;
        }
        if (name[i] == 'Y' || name[i] == 'y')
        {
            printY();
            cout << endl;
        }
        if (name[i] == 'Z' || name[i] == 'z')
        {
            printZ();
            cout << endl;
        }
    }
}
int main()
{
    string name;
    getline(cin, name);
    cout << name;
    cout << endl
         << endl;
    printname(name);
    return 0;
}