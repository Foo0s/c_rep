#pragma once
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;


/* class Buy.h */

class Buy : public Product { //Наследование

	//Приватные данные
	private:

		int count_tovar;
		double count_to_price_tovar;
		double weight_tovar;

	//Публичные данные
	public:
		
		Buy(); //Пустой конструктор
		~Buy() { cout << "Объект был удалён" << endl; } //Деструктор


		//Инкапсуляция

		void setCount_Tovar(const int);

		int getCount_Tovar() const;

		double getCount_To_Price_Tovar() const;

		double getWeight_Tovar() const;

};
