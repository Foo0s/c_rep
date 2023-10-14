#include <iostream>
#include <locale>

using namespace std;

struct Books {
	char author[50];
	char name_book[80];
	char izd_book[80];
	int year;
	int price;
};


struct Books_k {
	char author[50];
	char name_book[80];
	char izd_book[80];
	int year;
	int price;
};


void setData(Books* lib, int count) {
	for (int i = 0; i < count; i++) {
		cout << "Имя автора: "; cin.getline(lib[i].author, 50);
		cout << "Название книги: "; cin.getline(lib[i].name_book, 80);
		cout << "Издательство: "; cin.getline(lib[i].izd_book, 80);
		cout << "Год выпуска: "; cin >> lib[i].year;
		cout << "Цена: "; cin >> lib[i].price;
		cin.get();
	}
}

void findData(Books* lib, int count) {
	for (int i = 0; i < count; i++) {
		string word = lib[i].name_book;
		for (char i : word) {
			cout << i << endl;
			if ((255 + (int) i ) == 170 || (255 + (int)i) == 138) {
				cout << "YEASS" << endl;
			}
			cout << "nope/" << endl;
		}
	}
}

int main() {

	setlocale(LC_ALL, ".1251");
	const int numb_book = 1;
	Books library[numb_book] = {};
	
	//Заполнение....
	setData(library, numb_book);
	findData(library, numb_book);

}
