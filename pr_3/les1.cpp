#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//Вывести на экран таблицу значений функции y(x) для x, изменяющегося от а = 0.1 до b = 1.2 с шагом h = 0.1
	setlocale(LC_ALL, "ru");
	double a = 0.1; double b = 1.2; double h = 0.1;
	while (a < b) {
		double x = 0;
		for (int i = 1; i < 20; i++) {
			x += (double) (pow(a, (2 * i) - 1)) / (2 * i + 1);
		}
		a += h;
		cout << "Значение шага: " << a << "\tЗначение x: " << x << endl;
	}
}
