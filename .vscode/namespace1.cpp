#include<cmath>
#include <iostream>
using namespace std;
namespace ok{
double pow(double x, double y){

    return x;
}
}
int main(){
    double a=3,b=3,c;
    //  c=std::pow(a,b); //std paw will run
    //    c=ok::pow(a,b);
       c=pow(a,b);//std paw will runl̥l̥
 cout  <<c;
return 0;
}