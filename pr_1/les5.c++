#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x = -15.246; double y = 4.642e-2; int z = 21;
    double s = log(pow(y, -sqrt(abs(x)))) * (x - (y/2));
    double s_2 = pow(sin(atan(z)), 2);
    cout << s + s_2 << endl;
}