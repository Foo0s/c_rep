#include <iostream>
#include <iomanip>
#include <istream>
#include <ostream>


using namespace std;


class List {

	friend istream& operator >> (istream&, List &);
	friend ostream& operator << (ostream&, List&);

private:

	int size;
	int* array;

public:

	List() {
		size = 0;
		array = new int[0];
	}

	List(int size) {
		this->size = size;
		this->array = new int[this->size];
		for (int i = 0; i < this->size; i++) {
			cout << "Элемент: "; cin >> array[i];
			cout << "\n";
		}
	}

	List(int* arr) {
		size = sizeof(arr) / 2;
		for (int i = 0; i < size; i++) {
			array[i] = arr[i];
		}
	}

	~List() {
		cout << "Объект был удалён" << endl;
	}

	void show_array() {
		cout << "Вывод массива" << endl;
		for (int element = 0; element < size; element++) {
			cout << "#" << element << " Элемент: " << array[element] << endl;
		}
	}

	int get_size() {
		return this->size;
	}

	void set_size(int size) {
		this->size = size;
	}

	//Перегруженные операторы

	List operator+= (const int numb) {
		this->size = this->size + 1;
		int* new_arr = new int[this->size];

		for (int i = 0; i < this->size-1; i++) {
			new_arr[i] = this->array[i];
		}
		new_arr[this->size-1] = numb;
		this->array = new_arr;
		return 0;
	}
};




