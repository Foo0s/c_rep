#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x = 3.74e-2; double y =-0.825; double z = 0.16e+2;
    double s = ((1+pow(sin(x+y), 2)) / (abs(x - ((2*y) / (1+pow(x, 2)*pow(y, 2)))))) *pow(x, abs(y));
    cout << s + pow(cos(atan(1/z)), 2) << endl;
}