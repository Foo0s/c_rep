#include <iostream>
#include <Windows.h>

using namespace std;

struct Books {
	char author[50];
	char name_book[80];
	char izd_book[80];
	int year;
	int price;
};


struct Books_k {
	string author;
	string name_book;
	string izd_book;
	int year;
	int price;
};


void setData(Books* lib, int count) {
	for (int i = 0; i < count; i++) {
		cout << "\n";
		cout << "Имя автора: "; cin.getline(lib[i].author, 50);
		cout << "Название книги: "; cin.getline(lib[i].name_book, 80);
		cout << "Издательство: "; cin.getline(lib[i].izd_book, 80);
		cout << "Год выпуска: "; cin >> lib[i].year;
		cout << "Цена: "; cin >> lib[i].price;
		cin.get();
		cout << "\n";
	}
}

int findData(Books* lib, int count) {
	int result = 0;
	for (int i = 0; i < count; i++) {
		string word = lib[i].izd_book;
		int counts = 0;
		for (char i : word) {
			if (i == 'к' || i == 'К') {
				counts++;
			}
		}
		if (counts == 1) result++;
	}

	return result;
}

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int numb_book = 5;
	Books library[numb_book] = {};

	//Заполнение....
	setData(library, numb_book);
	int result = findData(library, numb_book);

	Books_k boksk[numb_book];

	int indx = 0;
	for (int j = 0; j < numb_book; j++) {
		string word = library[j].izd_book;
		int counts_2 = 0;
		for (char i : word) {
			if (i == 'к' || i == 'К') {
				counts_2++;
			}
		}
		if (counts_2 == 1) {
			boksk[indx].author = (string) library[j].author;
			boksk[indx].izd_book = (string) library[j].izd_book;
			boksk[indx].name_book = (string) library[j].name_book;
			boksk[indx].price = library[j].price;
			boksk[indx].year = library[j].year;
			indx++;
		}
	}
	
	for (int i = 0; i < indx; i++) {
		for (int j = 0; j < indx; j++) {
			if (boksk[j].name_book[0] >= boksk[i].name_book[0]) {
				string word_time = boksk[i].name_book;
				boksk[i].name_book = boksk[j].name_book;
				boksk[j].name_book = word_time;
			}
		}
	}


	for (int i = 0; i < indx; i++) {
		cout << "\n";
		cout << "Author: " << boksk[i].author << "/ " << "Izd: " << boksk[i].izd_book << "/ " << "Name book: " << boksk[i].name_book << "/ " << "Price: " << boksk[i].price << "/ " << "Year: " << boksk[i].year;
		cout << "\n";
	}
}
