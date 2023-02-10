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
int main()
{
    int a, b;
    cin >> a >> b;
    triplet ans = extendedEuclid(a, b);
    cout << ans.x << " " << ans.y << " " << ans.gcd;
    return 0;
}