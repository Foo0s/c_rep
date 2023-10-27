#include <iostream>
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	string test = "1234567890-+*/%**";
	string text_from_user;
	getline(cin, text_from_user);

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
