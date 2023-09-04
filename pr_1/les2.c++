#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x = -4.5; double y = 0.75e-4; double z =-0.845e+2;
    double s = ((cbrt(9. + (pow(x-y, 2)))) / (pow(x, 2) + pow(y, 2) + 2.)) - (exp(abs(x-y))*pow(tan(z), 3));
    cout << s << endl;
}