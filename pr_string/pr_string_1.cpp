#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	string text_user;
	getline(cin, text_user);
	int *array = new int[10];
	int indx = 0;
	for (int j = 0; j+1 < text_user.length(); j++) {
		if (text_user[j] == '.' && text_user[j+1] == ' ') {
			array[indx] = j+1;
			indx++;
		}
	}

	for (int i = 0; i < indx; i++) {
		cout << array[i] << " ";
		cout << "\n";
	}
}
