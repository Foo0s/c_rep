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

List::List(int* array) {
	this->size_list = sizeof(array) / 2;
	this->list = 0;
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
	int* new_list = new int[size_list];
	int count_id = 0;
	for (int numb = size_list-1; numb >= 0; numb--) {
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
	int count_2 = 0;


	for (int el = 0; el < size_list; el++) {
		for (int el2 = count; el2 < size; el2++) {
			if (list[el] == arr[el2]) {
				indx = el;
				count++;
				if (count == size) {
					count_2 = count;
				}
				break;
			}
			else {
				if (count != 0) {
					count--;
				}
			}
		}
	}
	if (count_2 == size) {
		return indx;
	}
	return -1;
}
