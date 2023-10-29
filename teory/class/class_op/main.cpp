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
	//Создание объекта машин.
	while (max_car > 0) {
		string marka; string model; string gos_nomer; int year; int price;
		cout << "Марка: "; cin >> marka;
		cout << "Модель: "; cin >> model;
		cout << "Гос-номер: "; cin >> gos_nomer;
		cout << "Год: "; cin >> year;
		cout << "Цена: "; cin >> price;
		Car* new_car = new Car(marka, model, gos_nomer, year, price);
		if (new_car->max_price() >= price_car) {
			price_car = new_car->max_price();
		}
		new_car->information_about_car();
		new_car->set_information();
		max_car--;
		if (max_car == 0) {
			new_car->max_price();
		}
	}


	cout << "\n";
}#include <iostream>
#include "car.cpp"
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите количество машин: "; int max_car;
	cin >> max_car;


	int price_car = 0;
	//Создание объекта машин.
	while (max_car > 0) {
		string marka; string model; string gos_nomer; int year; int price;
		cout << "Марка: "; cin >> marka;
		cout << "Модель: "; cin >> model;
		cout << "Гос-номер: "; cin >> gos_nomer;
		cout << "Год: "; cin >> year;
		cout << "Цена: "; cin >> price;
		Car* new_car = new Car(marka, model, gos_nomer, year, price);
		if (new_car->max_price() >= price_car) {
			price_car = new_car->max_price();
		}
		new_car->information_about_car();
		new_car->set_information();
		max_car--;
		if (max_car == 0) {
			new_car->max_price();
		}
	}


	cout << "\n";
}
