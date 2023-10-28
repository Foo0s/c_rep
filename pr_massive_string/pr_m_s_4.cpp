#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string* arr_surname;
	cout << "Введите количество фамилий: ";
	int c_surname = 0; cin >> c_surname;
	arr_surname = new string[c_surname];

	int count_surname = 0;
	for (int i = 0; i < c_surname; i++) {
		cout << "Введите фамилию: " << endl;
		string word;
		cin >> word;
		arr_surname[i] = word;
		if (word[word.size()-1] == 'в') { count_surname++; }
	}

	string *new_arr = new string[count_surname];

	int indx = 0;
	for (int j = 0; j < c_surname; j++) {
		if (arr_surname[j][arr_surname[j].size() - 1] == 'в') {
			new_arr[indx] = arr_surname[j];
			indx++;
		}
	}

	cout << "\n" << endl;
	cout << "Новый массив: " << endl;

	for (int i = 0; i < count_surname; i++) {
		for (int j = 0; j < count_surname; j++) {
			if (new_arr[i] <= new_arr[j]) {
				string ss = new_arr[i];
				new_arr[i] = new_arr[j];
				new_arr[j] = ss;
			}
		}
	}

	for (int i = 0; i < count_surname; i++) {
		cout << new_arr[i] << endl;
	}
}
