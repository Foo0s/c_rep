#include <iostream>
#include <cmath>

using namespace std;

int main(){
    /*Практическая работа №2*/
    int x; int y;
    cout << "Введите число x: " << endl;
    cin >> x;
    cout << "Введите число y: " << endl;
    cin >> y;
    if (x*y < 10 && x*y > 0.5){
        cout << "Ваше число (1): " << pow(10, x-abs(y)) << endl;
    }
    else if (0.1 < x*y < 0.5){
        cout << "Ваше число (2): " << cbrt(abs(x+y)) << endl;
    }
    else{
        cout << "Ваше число (3): " << pow(2*x, 2) << endl;
    }
}
