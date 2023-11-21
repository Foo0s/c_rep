#include <iostream>
#include "List.h"
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*
		Вариант #6.
		Определить   класс   список   элементов.   В   определение   класса   включить   два   конструктора   для
		определения списка по его размеру и путем копирования другого списка. Предусмотреть функции инверсии
		списка (123->321) и поиска подсписка в списке.
	*/

	List new_list_1(5);
	int x[4] = {2, 3, 4, 5};
	List new_list_2(x);

	cout << "Размер массива: " << new_list_1.get_size_list() << endl;

	new_list_1.show_list();
	cout << "Второй массив: " << endl;
	new_list_2.show_list();
	new_list_2.inverse_list();
	new_list_2.show_list();

	new_list_1.inverse_list();
	new_list_1.show_list();
	int lst[3] = { 1, 2, 3 };
	int result = new_list_1.find_unlist(lst, 3);
	result > -1 ? cout << "Индекс подсписка в списке: " << result : cout << "Данного подсписка в списке нет";
}
