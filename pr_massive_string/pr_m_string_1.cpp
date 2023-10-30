#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string arr_cities[10] = {"Амстердам", "Кенинсберг", "Киев", "Ставрополь", "анкара", "Вологда", "Москва", "Владимир", "Брянск", "Минск"};

	for (int i = 0; i < 10; i++) {
		cout << "Введите город: ";
		cin >> arr_cities[i];
	}

	int counts = 0;
	//Обработка массива строк//
	for (int i = 0; i < arr_cities->size(); i++) {
		if (arr_cities[i][0] == 'А' || arr_cities[i][0] == 'а') {
			cout << "Город: " << arr_cities[i] << endl;
			counts++;
		}
	}

	cout << "Количество: " << counts;
}
