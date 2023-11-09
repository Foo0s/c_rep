#pragma once
#include <iostream>
#include <string>

using namespace std;

/* File Product.h */

class Product {
	//Приватные данные
private:
	string name; //Название продукта
	double price; //Цена продукта
	double weight; //Вес продукта

	//Публичные методы
public:
	//Пустой конструктор
	Product() {};

	//Конструктор
	Product(string names, double prices, double weightt) {
		name = names;
		price = prices;
		weight = weightt;
	}

	//Деструктор
	~Product() {
		cout << "Объект класса был удалён" << endl;
	}


	//Инкапсуляций
	void setName(const string);

	const string getName() const;

	void setPrice(const double);

	double getPrice() const;

	void setWeight(const double);

	double getWeight() const;
};
