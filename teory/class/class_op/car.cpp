#include <iostream>
#include <fstream>

class Car {
	std::ofstream fout;
public:

	//Конструктор Класса.
	Car(std::string markas, std::string models, std::string gos_nomers, int years, int prices) {
		marka = markas;
		model = models;
		gos_nomer = gos_nomers;
		year = years;
		price = prices;
	}

	Car() {
		marka = 'Null'; model = 'Null'; gos_nomer = 'Null';
		year = 1000; price = 1000;
	}


	//Деструктор класса.
	~Car() {
		std::cout << "Память была успешно очищена.";
	}

	void information_about_car() {
		std::cout << "\n";
		std::cout << "Марка: " << marka << " ~ " << "Модель: " << model << " ~ " << "Гос-номер: " << gos_nomer << " ~ " << "Год: " << year << " ~ " << "Цена: " << price;
		std::cout << "\n";
	}

	void set_information() {
		//Запись в файл данных.
		fout.open("cars.txt");
		fout << get_marka() << "  " << get_model() << "  " << get_gos_nomer() << "  " << get_year() << "  " << get_price() << "\nInformation: " << get_information();
		fout << std::endl;
		fout.close();
	}

	void max_price(std::string marka, std::string moodel, std::string gos_nomer, int year, int price) {
		set_marka(marka); set_model(model); set_gos_nomer(gos_nomer); set_year(year); set_price(price);
		set_information();
	}


	//Инкапсуляция.

	//Information//
	void set_information(std::string informations) {
		information = informations;
	}

	std::string get_information() {
		return information;
	}


	//Marka//
	void set_marka(std::string markaa) {
		marka = markaa;
	}

	std::string get_marka() {
		return marka;
	}

	//Model//
	void set_model(std::string models) {
		model = models;
	}

	std::string get_model() {
		return model;
	}

	//gos_nomer//
	void set_gos_nomer(std::string gos) {
		gos_nomer = gos;
	}

	std::string get_gos_nomer() {
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
	std::string marka;
	std::string model;
	std::string gos_nomer;
	int year;
	int price;
	std::string information;
};
