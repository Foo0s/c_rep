#include "Product.h"
#include <iostream>
#include <string>

using namespace std;

const string Product::getName() const {
	return Product::name;
}

void Product::setName(const string s) {
	Product::name = s;
}

double Product::getPrice() const {
	return Product::price;
}

void Product::setPrice(const double number_price) {
	Product::price = number_price;
}

double Product::getWeight() const {
	return Product::weight;
}

void Product::setWeight(const double number_weight) {
	Product::weight = number_weight;
}
