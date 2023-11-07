#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Ob {
public:
	Ob(char ar, std::string tex, int num, int pric) {
		set_art(ar);
		set_numb(num);
		set_price(pric);
		set_str(tex);
	}

	Ob() {};

	//Деструктор
	~Ob() {}

	void set_art(char ar) {
		art = ar;
	}

	void set_str(std::string tex) {
		text = tex;
	}

	void set_numb(int num) {
		numb = num;
	}

	void set_price(int pric) {
		price = pric;
	}



	char get_art() { return art; };
	std::string get_str() { return text; };
	int get_numb() { return numb; };
	int get_price() { return price; };



	void write_in_file() {
		//Создание потока записи в файл//
		ofstream file("data_text.txt", ios_base::app);
		file << "Артикул: " << get_art() << " || " << "Название: " << get_str() << " || " << "Количество: " << get_numb() << " || " << "Стоимость: " << get_price() << endl;
	};
	void get_info() {
		cout << "Артикул: " << get_art() << " || " << "Название: " << get_str() << " || " << "Количество: " << get_numb() << " || " << "Стоимость: " << get_price() << endl;
	};
private:
	char art;
	std::string text;
	int numb;
	int price;
};
//Конструктор//

