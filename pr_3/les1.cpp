#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	/*����� �� ����� ������� �������� x (0.2; 1.2)*/
	double a = 0.2; double b = 1.2; double x = a; double h = 0.1;
	while (x <= b) {
		cout << "�������� x: " << x << endl;
		x += h;
	}
}