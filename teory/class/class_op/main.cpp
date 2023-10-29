#include <iostream>
#include "car.cpp"
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите количество машин: "; int max_car;
	cin >> max_car;


	int price_car = 0;
	string marka_1; string model_1; string gos_nomer_1; int year_1; int price_1;
	//Создание объекта машин.
	while (max_car > 0) {
		string marka; string model; string gos_nomer; int year; int price;
		cout << "Марка: "; cin >> marka;
		cout << "Модель: "; cin >> model;
		cout << "Гос-номер: "; cin >> gos_nomer;
		cout << "Год: "; cin >> year;
		cout << "Цена: "; cin >> price;
		Car* new_car = new Car(marka, model, gos_nomer, year, price);
		if (price_car <= price) {
			price_car = price;
			marka_1 = marka; model_1 = model; gos_nomer_1 = gos_nomer_1; year_1 = year; price_1 = price;
		}
		new_car->information_about_car();
		max_car--;
		if (max_car == 0) {
			new_car->max_price(marka_1, model_1, gos_nomer_1, year_1, price_1);
		}
	}
}
