#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите число: ";
	string number; cin >> number;
	string number_cpy = number;
	reverse(number.begin(), number.end());
	if (number.compare(number_cpy) == 0) {
		cout << "Число является перевёртышем";
	}
	else {
		cout << "Число не является перевёртышем";
	}
}
