#include <iostream>
#include "List.h"

using namespace std;


List::List(int size_list) {
	this->size_list = size_list;
	for (int i = 0; i < this->size_list; i++) {
		cout << "Элемент списка = "; cin >> list[i];
	}
	cout << "Массив был успешно создан" << endl;;
}

List::List(int *array) {
	this->size_list = sizeof(array);
	this->list = new int[size_list];
	for (int i = 0; i < size_list; i++) {
		list[i] = array[i];
	}
}

int List::get_size_list() {
	return size_list;
}

void List::set_size_list(int size_list) {
	this->size_list = size_list;
}

void List::show_list() {
	if (this->invert == true) {
		cout << "Была осуществлена инверсия массива!" << endl;
	}
	cout << "\n\n" << endl;
	for (int element = 0; element < size_list; element++) {
		cout << "#" << element << " элемент списка: " << list[element] << endl;
	}
}


void List::inverse_list() {
	this->invert = true;
	int *new_list = new int[sizeof(list)];
	int count_id = 0;
	for (int numb = this->size_list-1; numb >= 0; numb--) {
		new_list[count_id] = this->list[numb];
		count_id++;
	}

	this->list = new_list;
	cout << "Массив был успешно перевёрнут!\nВызовите метод show_list() для просмотра..." << endl;
}

int List::find_unlist(int arr[], int size) {
	int indx = 0;
	int count = 0;
	int countes = 0;
	for (int el2 = 0; el2 < size_list; el2++) {
		for (int el = 0; el < size; el++) {
			if (list[el2] == arr[el]) {
				count++;
				indx = el2;
				if (count == size) {
					return indx;
				}
				continue;
			}
		}
	}
	cout << count << endl;
	return -1;
}
