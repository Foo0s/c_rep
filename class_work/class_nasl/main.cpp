#include "Check.cpp"
#include <iostream>
#include <string>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите количество товаров: "; int len_to_tovar; cin >> len_to_tovar;
    cout << "\n";
    
    //Создание динамического объекта класса len_to_tovar
    Check *store_tovar = new Check[len_to_tovar];

    for (int i = 0; i < len_to_tovar; i++) {
        string name; double price; double weight; int count_to_tovar;
        cout << "Название товара: "; cin >> name;
        cout << "Цена товара (Р): "; cin >> price;
        cout << "Вес товара (кг): "; cin >> weight;
        cout << "Количество купленного товара: "; cin >> count_to_tovar;
        store_tovar[i].setName(name);
        store_tovar[i].setPrice(price);
        store_tovar[i].setWeight(weight);
        store_tovar[i].setCount_Tovar(count_to_tovar);
        cout << "\n\n";
    }

    cout << "Название товара   " << "Цена товара   " << "Вес товара (кг)   " << "Количество купл.   " << "Сумма покупки   " << "Общий вес" << endl;
    for (int j = 0; j < len_to_tovar; j++) {
        store_tovar[j].printAllInfo();
    }

}

