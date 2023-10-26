#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string test = "1234567890-+*/%**";
	string text_from_user = "";
	bool choice = true;

	while (choice == true) {
		cout << "Введите текст: ";
		string now_text; cin >> now_text;
		text_from_user += now_text + " ";

		cout << "Желаете продолжить ввод? (1-Yeas | 0-False): ";
		cin >> choice;
	}

	string result = "";
	for (int i = 0; i < text_from_user.length(); i++) {
		for (int j = 0; j < test.length(); j++) {
			if (text_from_user[i] == test[j]) {
				result += text_from_user[i];
			}
		}
	}
	cout << "Итоговая строка: " << result;
}
