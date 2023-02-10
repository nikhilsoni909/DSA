#include <iostream>

using namespace std;

const int N = 100000, MOD = 1000000000;
struct triplet
{
    int x, y, gcd;
};

triplet extendedEuclid(int a, int b)
{
    if (b == 0)
    {
        triplet ans;
        ans.x = 1;
        ans.gcd = a;
        ans.y = 0;
        return ans;
    }
    triplet smallAns = extendedEuclid(b, a % b);
    triplet ans;
    ans.gcd = smallAns.gcd;
    ans.x = smallAns.y;
    ans.y = smallAns.x - (a / b) * smallAns.y;
    return ans;
}
int multiplicativeModuloInverse(int a, int m)
{
    triplet temp = extendedEuclid(a, m);
    return temp.x;
}
int main()
{
    int a, m;
    cin >> a >> m;

    cout << multiplicativeModuloInverse(a, m) << endl;
    return 0;
}