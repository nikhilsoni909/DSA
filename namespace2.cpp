#include<cmath>
#include <iostream>
// using namespace std;
namespace ok{
double pow(double , double );
}
double ok:: pow(double x, double y){
    return y;
}
int main(){
    double a=2,b=3,c;
    // c=pow(a,b); //cmath wala pow run hoga
    //    c=ok::pow(a,b);
       c=std::pow(a,b);
 std:: cout  <<c;
return 0;
}