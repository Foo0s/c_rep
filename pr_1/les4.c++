#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x = 0.4e+4; double y = -0.875; double z = -0.475e-3;
    double s = pow(abs(cos(x) - cos(y)), 1+2*pow(sin(y), 2));
    double s_two = 1+z+(pow(z, 2)/2) + (pow(z, 3)/3) + (pow(z, 4)/4);
    cout << s*s_two << endl;
}