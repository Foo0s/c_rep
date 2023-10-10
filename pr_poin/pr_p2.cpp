#include <iostream>
#include <ctime>

using namespace std;

int main() {
    cout << "Введите 3 числа через enter: " << endl;
    double *s = 0; double *t = 0; double *d = 0;
    double x; double y; double z;
    cin >> x >> y >> z;
    s = &x; t = &y; d = &z;
    cout << "number 1: " << *s / 2 << " number 2: " << *t << " number 3: " << *d;
}
