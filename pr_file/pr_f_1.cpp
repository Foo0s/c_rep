#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;


void Write_In_File(string word) {
	//Создание потока записи в файл//
	ofstream write_file("text_2.txt", ios_base::out);
	write_file << "//Здесь хранится самое длинное слово" << endl;
	write_file << "//" << word;
	cout << "Запись в файл завершена" << endl;
}

string Read_In_File() {
	string answer;

	//Создание потока для чтения файла//
	ifstream read_file("text.txt", ios_base::in);
	if (!read_file.is_open()) {
		cout << "Ошибка. Файл не может быть открыт" << endl;
	}
	else {
		cout << "Файл успешно открылся" << endl;
		cout << "Чтение файла.... \n\n" << endl;
		string word;
		for (read_file >> word; !read_file.eof(); read_file >> word) {
			if (word.size() > answer.size()) {
				answer = word;
			}
		}
	}
	return answer;
}

int main() {

	/*
	6-й вариант 1-е задание.
	Дан символьный файл f. Найти и записать в файл g самое длинное слово файла f, снабдив его комментарием
	*/

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string result = Read_In_File();
	Write_In_File(result);

	return 0;
}
