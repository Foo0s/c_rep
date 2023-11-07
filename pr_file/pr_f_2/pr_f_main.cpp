#include <iostream>
#include <fstream>
#include <Windows.h>
#include "ob.cpp"


using namespace std;


void find_ob(char art) {
	ifstream file("data_text.txt");
	string line;

	if (file.is_open()) {
		while (!file.eof()) {
			getline(file, line);
			string find = "Артикул: ";
			find.push_back(art);
			if (line.find(find) != -1) {
				cout << line << endl;
			}
		}
	}
	else {
		cout << "Ошибка при открытии файла." << endl;
	}
	file.close();
}

void find_d_ob() {
	ifstream file_t("data_text.txt");
	string line_text;

	string* d_ob = new string[4];

	if (file_t.is_open()) {
		cout << "Файл успешно открылся." << endl;
		int j = 0;
		while (!file_t.eof()) {
			getline(file_t, line_text);
			if (line_text.find("Артикул: Д") != -1) {
				int name = line_text.find("Название: ");
				int kol = line_text.find("Количество: ");
				cout << name << " " << kol << endl;
				string info = "";
				string info_2 = "";
				for (int i = name; i < line_text.length(); i++) {
					if (line_text[i] == '|') {
						break;
					}
					info += line_text[i];
				}

				for (int i = kol; i < line_text.length(); i++) {
					if (line_text[i] == '|') {
						break;
					}
					info_2 += line_text[i];
				}
				string result = ("Категория обуви: Дамская " + info + " " + info_2);
				d_ob[j] = result;
				j++;
			}
		}
	}

	cout << "Список дамской обуви: " << endl;
	for (int i = 0; i < d_ob->length(); i++) {
		cout << d_ob[i] << endl;
	}
}

void menu() {
	cout << "1. Поиск обуви по артикулу" << endl;
	cout << "2. Список дамской обуви с указанием числа пар" << endl;
}

void sel_menu(int choice) {
	char art;
	string name;
	switch (choice) {
	case 1: 
		cout << "Введите нужный артикул: "; cin >> art;
		find_ob(art);
		break;
	case 2: 
		find_d_ob();
		break;
	default: cout << "Нет такого пункта!" << endl; break;
	}
}

int main() {

	/*
	6-й вариант 2-е задание.
	Сформировать массивна диске, содержащий сведения об ассортименте обуви
	в магазине фирмы. Класс содержит поля: артикул, наименование, количество,
	стоимость одной пары. Артикул начинается с буквы Д – для дамской обуви, М –
	для мужской, П – для детской.
	Написать программу, которая выбирает необходимую информацию с диска и
	выводит на экран:
	- сведения о наличии и стоимости обуви артикула X;
	- ассортиментный список дамской обуви с указанием наименования и
	имеющегося в наличии числа пар каждой модели.
	*/

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Желаете внести записи в файл? (1-Y): ";
	int choice; cin >> choice;
	if (choice == 1) {
		int numb;
		cout << "Введите количество записей: "; cin >> numb;

		Ob* obyv = new Ob[numb];

		for (int i = 0; i < numb; i++) {
			char ar; string text; int numb; int price;
			cout << "Артикул (Д-женщ, М-муж, П-детск): "; cin >> ar;
			cout << "Название обуви: "; cin >> text;
			cout << "Количество обуви: "; cin >> numb;
			cout << "Цена обуви: "; cin >> price;

			obyv[i].set_art(ar); obyv[i].set_numb(numb); obyv[i].set_str(text);
			obyv[i].set_price(price);

			//Info//
			obyv[i].get_info();

			//Запись данных в файл//
			obyv[i].write_in_file();
		}
	}
	
	menu();
	cout << "Ваш выбор: ";
	int choice_menu; cin >> choice_menu;
	sel_menu(choice_menu);

	return 0;
}
