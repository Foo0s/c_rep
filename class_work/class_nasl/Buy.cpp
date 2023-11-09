#include <iostream>
#include "Buy.h"
#include <string>

using namespace std;


Buy::Buy() {
	count_tovar = 0;
	count_to_price_tovar = 0.0;
	weight_tovar = 0.0;
}


void Buy::setCount_Tovar(const int count) {
	count_tovar = count;
	count_to_price_tovar = count_tovar * Buy::getPrice();
	weight_tovar = Buy::getWeight() * count_tovar;
}

int Buy::getCount_Tovar() const {
	return Buy::count_tovar;
}


double Buy::getCount_To_Price_Tovar() const {
	return Buy::count_to_price_tovar;
}

double Buy::getWeight_Tovar() const {
	return Buy::weight_tovar;
}
