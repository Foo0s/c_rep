#include <iostream>
#include <cmath>

using namespace std;


int main(){
    double x = 14.26; double y = -1.22; double z = 3.5e-2;
    double s = ((2.*cos(x - 2./3.)) / (1./2. + pow(sin(y), 2))) * (1. + (pow(z, 2) / (3. - pow(z, 3) / 5)));
    cout << s << endl;
}