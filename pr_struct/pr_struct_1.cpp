#include <iostream>
#include <cmath>

using namespace std;

void show_baby_maxHeight(const struct Children childs[], int m_count);
struct Children {
	char name[40];
	int pol;
	int height;
};


int main() {
	setlocale(LC_ALL, "RU");
	const int k_child = 20;
	Children baby[k_child] = {};

	for (int i = 0; i < k_child; i++) {
		cout << "Введите имя ребёнка: "; cin.getline(baby[i].name, 40); cout << "\n";
		cout << "Введите пол ребёнка: м=1 ж=0: "; cin >> baby[i].pol; cout << "\n";
		cout << "Введите рост ребёнка: "; cin >> baby[i].height;
		cin.get();
	}
	show_baby_maxHeight(baby, k_child);
}


void show_baby_maxHeight(const struct Children childs[], int m_count) {
	int height = 0; string name = "";
	for (int i = 0; i < m_count; i++) {
		if (childs[i].pol == 0 && height <= childs[i].height) {
		    height = childs[i].height;
		    name = childs[i].name;
		}
	}
	cout << "Имя самой высокой девочки: " << name << "\nРост девочки: " << height;
}
