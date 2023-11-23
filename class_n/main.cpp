#include "Y.cpp"

#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    Y new_object(5, 4, 2);
    cout << "Значение принта класса Х: " << endl;
    ((X)new_object).print();

    cout << "Значение в классе Y: " << endl;
    new_object.print();
    cout << "Решение задачи: " << endl;
    new_object.Run();

    cout << "Смена значения Y и X: " << endl;
    new_object.set_numbers(3, 4, 4);
    new_object.Run();
}
