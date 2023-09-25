#include <iostream>

using namespace std;

int main()
{
    //Нужно вычеслить время за которое обжарятся все котлеты с учётом вместимости сковороды.
    cout<<"Введите кол-во котлет: ";
    int numb;
    cin >> numb;
    cout << "Введите количество минут для обжарки 1-й стороны: ";
    int minutes;
    cin >> minutes;
    cout << "Введите кол-во помещаемых котлет на сковороду: ";
    int k_skov;
    cin >> k_skov;
    if (k_skov >= numb) cout << "Минут: " << minutes*2;
    else if (numb*2 % k_skov == 0) cout << "Минут: " << minutes*((numb*2) / k_skov);
    else cout << "Минут: " << minutes*(1 + (numb*2) / k_skov);
}
