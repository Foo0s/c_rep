#include <iostream>


using namespace std;


struct Birthday_Student {
	int day;
	int month;
	int year;
};

struct Student {

	char surname[50];
	Birthday_Student data;
	bool pol;
};

void showResult(Student* new_st, int count);


void setData(Student* new_st, int count) {
	for (int i = 0; i < count; i++) {
		//Блок информации о ДР.
		cout << "Фамилия: "; cin.getline(new_st[i].surname, 50);
		cout << "Пол (м. - 1 \\ ж. - 0): "; cin >> new_st[i].pol;

		//Дата рождения.
		cout << "День рождения: "; cin >> new_st[i].data.day;
		cin.get();
		cout << "Месяц рождения (Порядковый номер): "; cin >> new_st[i].data.month;
		cout << "Год рождения: "; cin >> new_st[i].data.year;
		cin.get();
	}
}


int main() {
	setlocale(LC_ALL, "ru");
	const int count_student = 20;

	Student new_students[count_student];
	setData(new_students, count_student);
	showResult(new_students, count_student);
}

void showResult(Student* new_st, int count) {
	for (int i = 0; i < count; i++) {
		if (new_st[i].pol == 0 & new_st[i].data.month == 12) {
			cout << "Фамилия: " << new_st[i].surname << " Пол: женщ." << " Дата рождения: " << endl;
			cout << "День: " << new_st[i].data.day << " Месяц: " << new_st[i].data.month << " Год: " << new_st[i].data.year;
		}
	}
}
