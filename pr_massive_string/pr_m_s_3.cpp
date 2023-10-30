#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string arr_cities[10];

	for (int i = 0; i < 10; i++) {
		cout << "Город: ";
		cin >> arr_cities[i];
	}


	//Обработка массива строк//
	int counts = 0;
	for (int i = 0; i < 10; i++) {
		int cc = 0;
		for (int j = 0; j < arr_cities[i].length(); j++) {
			if (arr_cities[i][j] == 'р' || arr_cities[i][j] == 'Р') {
				cc++;
			}
		}
		if (cc == 0) { counts++; }
	}
	cout << "\n\n";
	cout << "Количество городов без буквы р: " << counts;
}
