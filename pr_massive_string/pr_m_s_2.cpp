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
		cout << arr_cities[i] << "\t";
	}


	//Обработка массива строк//
	int size = 0;
	int indx = 0;
	int indx_2 = 0;
	int size_min = arr_cities[0].size();
	for (int i = 0; i < arr_cities->size(); i++) {
		if (size <= arr_cities[i].size()) { size = arr_cities[i].size(); indx = i;}
		if (size_min >= arr_cities[i].size()) { size_min = arr_cities[i].size(); indx_2 = i;}
	}
	string str_n = arr_cities[indx];
	arr_cities[indx] = arr_cities[indx_2];
	arr_cities[indx_2] = str_n;

	cout << "\n\n";
	cout << "Изменённый массив: " << endl;

	for (int j = 0; j < 10; j++) {
		cout << arr_cities[j] << endl;
	}

}
