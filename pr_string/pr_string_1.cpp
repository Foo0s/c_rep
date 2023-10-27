#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool choice = true;
	string text_user = "";
	while (choice == true) {
		cout << "Введите слово: ";
		string now_t;
		cin >> now_t;
		text_user.append(now_t);
		text_user.append(" ");
		cout << "Хотите закончить? (1-Yeas; 0-No): ";
		cin >> choice;
	}
	int *array = new int[10];
	int indx = 0;
	for (int j = 0; j+1 < text_user.size(); j++) {
		if (text_user[j] == '.' && text_user[j+1] == ' ') {
			array[indx] = j+1;
			cout << text_user[j] << " ";
			indx++;
		}
	}

	for (int i = 0; i < indx; i++) {
		cout << array[i] << " ";
		cout << "\n";
	}
}
