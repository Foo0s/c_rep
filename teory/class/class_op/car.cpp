#include <iostream>
#include <fstream>

using namespace std;

fstream fout("cars.txt", std::ios::app);

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

	void information_about_car() {
		cout << "\n";
		cout << "Марка: " << marka << " ~ " << "Модель: " << model << " ~ " << "Гос-номер: " << gos_nomer << " ~ " << "Год: " << year << " ~ " << "Цена: " << price;
		cout << "\n";
	}

	void set_information() {
		//Запись в файл данных.
		fout << get_marka() << "  " << get_model() << "  " << get_gos_nomer() << "  " << get_year() << "  " << get_price() << "\nInformation: " << get_information();
		fout.close();
	}

	int max_price() {
		fout << "\n\nИнформацию по самому дорогому автомобилю: \n";
		fout.close();
		set_information();

		return 0;
	}


	//Инкапсуляция.

	//Information//
	void set_information(string informations) {
		information = informations;
	}

	string get_information() {
		return information;
	}


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
	string information;
};
