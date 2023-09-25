#include <iostream>

using namespace std;

int main()
{
    //Нужно вычислить факториал числа.
    cout<<"Введите число x: ";
    int numb;
    cin >> numb;
    int count_n = 1;
    for(int i = 1; i <= numb; i++){
        count_n *= i;
    }
    cout << "Факториал числа " << numb << " равен: "<< count_n;
}
