#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x;
    cout << "Введите количество строк: " << endl;
    cin >> x;
    
    for (int h = 1; h <= x; h++){


        for (int h_2 = 1; h_2 < x-h+3; h_2++){
            cout << "  ";
        }
        int val = 1;
        for (int h_3 = 1; h_3 <= h; h_3++){
            cout << val << "  ";
            val = val * (h-h_3)/h_3;
        }
        cout << endl;
    }
}