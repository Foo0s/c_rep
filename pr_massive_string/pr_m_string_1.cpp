#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string arr_cities[10] = {"Волгоград", "Stalingrad", "Moskva", "Ростов-на-Дону", "Pavlovgrad", "Калининград", "Азов", "Тверь", "Омск", "Зеленограл"};

	//Обработка массива строк//
	for (int i = 0; i < arr_cities->size(); i++) {
		if (arr_cities[i].find("град") != -1 || arr_cities[i].find("grad") != -1) {
			cout << "Город: " << arr_cities[i] << endl;
		}
	}
}
