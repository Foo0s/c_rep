#include <iostream>
#include <cmath>

using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	/*Диапазон x = (0.2; 1.2)*/
	double a = 0.2; double b = 1.2; double x = a; double h = 0.1;
	while (x <= b) {
		for(int n = 1; n <= 20; n++){
			int y = (pow(x, 2 * n - 2) / (2 * n + 1));
			cout << "Значение (y): " << y << " Значение (x): "<< x << endl;
		};
		x += h;
	}
}