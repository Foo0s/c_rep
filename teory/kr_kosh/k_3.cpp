#include <iostream>

using namespace std;

int main()
{
    //Нужно вычислить сумму чисел от а до б.
    cout<<"Введите число x: ";
    int numb;
    cin >> numb;
    cout << "Введите число y: ";
    int m;
    cin >> m;
    int count_n;
    for(int i = numb; i <= m; i++){
        count_n += i;
    }
    cout << "Сумма чисел от " << numb << " до " << m << " равна: " << count_n;
}
