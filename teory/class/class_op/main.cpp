#include <iostream>
#include "student.cpp"
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите количество машин: "; int max_car;
	cin >> max_car;
	int *cars_price = new int[10];

	Car* new_car = new Car("marka", "model", "LDO92S", 2003, 29000);


	int cc = 0;
	//Создание объекта машин.
	while (max_car > 0) {
		string marka; string model; string gos_nomer; int year; int price;
		cout << "Марка: "; cin >> marka;
		cout << "Модель: "; cin >> model;
		cout << "Гос-номер: "; cin >> gos_nomer;
		cout << "Год: "; cin >> year;
		cout << "Цена: "; cin >> price;
		Car* new_car = new Car(marka, model, gos_nomer, year, price);
		cars_price[cc] = price;
		cc++;
		new_car->information_about_car();
		max_car--;
	}


	cout << "Максимальная цена автомобиля: " << new_car->max_price(cars_price, 10);
	cout << "\n";
	delete new_car;
}
