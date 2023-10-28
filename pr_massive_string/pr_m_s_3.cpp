#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string arr_cities[10] = {"Волгоград", "Stalingrad", "Moskva", "Ростов-на-Дону", "Pavlovgrad", "Калининград", "Азов", "Тверь", "Омск", "Зеленограл"};

	cout << "Изначальный массив: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr_cities[i] << " ";
	}


	//Обработка массива строк//
	int size = 0;
	for (int i = 0; i < arr_cities->size(); i++) {
		if (size <= arr_cities[i].size()) { size = arr_cities[i].size();}
	}
	cout << "\n\n";

	for (int j = 0; j < 10; j++) {
		if (arr_cities[j].size() == size) {
			cout << "Citi: " << arr_cities[j] << endl;
		}
	}
}
