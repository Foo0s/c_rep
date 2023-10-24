#include <iostream>

using namespace std;

class Car {

public:

	//Конструктор Класса.
	Car(string markas, string models, string gos_nomers, int years, int prices) {
		marka = markas;
		model = models;
		gos_nomer = gos_nomers;
		year = years;
		price = prices;
	}

	//Деструктор класса.
	~Car() {
		cout << "Память была успешно очищена.";
	}

	void set_info() {
		cout << "Введите информацию: ";
		cin.getline(information, 100);
	}

	void information_about_car() {
		cout << "\n";
		cout << "Марка: " << marka << " ~ " << "Модель: " << model << " ~ " << "Гос-номер: " << gos_nomer << " ~ " << "Год: " << year << " ~ " << "Цена: " << price;
		cout << "\n";
	}

	string get_info() {
		return information;
	}

	int max_price(int arr[], int count) {
		int price_now_car = arr[0];
		for (int i = 0; i < count; i++) {
			if (price_now_car <= (arr[i])) {
				price_now_car = arr[i];
			}
		}
		return price_now_car;
	}


	//Инкапсуляция.

	//Marka//
	void set_marka(string markaa) {
		marka = markaa;
	}

	string get_marka() {
		return marka;
	}

	//Model//
	void set_model(string models) {
		model = models;
	}

	string get_model() {
		return model;
	}

	//gos_nomer//
	void set_gos_nomer(string gos) {
		gos_nomer = gos;
	}

	string get_gos_nomer() {
		return gos_nomer;
	}

	//Year//
	void set_year(int years) {
		year = years;
	}

	int get_year() {
		return year;
	}

	//Price//
	void set_price(int prices) {
		price = prices;
	}

	int get_price() {
		return price;
	}



private:
	string marka;
	string model;
	string gos_nomer;
	int year;
	int price;

	char information[100];
};
