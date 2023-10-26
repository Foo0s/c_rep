#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите имя: ";
	string s, s1, s2;
	cin >> s;
	cout << "Введите фамилию: ";
	cin >> s1;
	cout << "Введите отчество: ";
	cin >> s2;

	string new_s = s1 + " " + s[0] + "." + s2[0] + ".";

	cout << new_s;
}
