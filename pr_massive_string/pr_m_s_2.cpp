#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string arr_cities[20];

	for (int i = 0; i < 20; i++) {
		cout << "Горная вершина: " << endl;
		cin >> arr_cities[i];
	}


	//Обработка массива строк//
	int size = arr_cities[0].size();
	int index = 0;

	for (int j = 0; j < 6; j++) {
		if (arr_cities[j].size() <= size) {
			size = arr_cities[j].size();
			index = j;
		}
	}
	cout << "\n\n";
	string st = arr_cities[index];

	cout << "Самое короткое название горной вершины: " << st;
}
