#include <iostream>

using namespace std;

class X {

protected:

	int x1, x2;

public:

	X(int x, int y) {
		this->x1 = x; this->x2 = y;
	}

	X() {
		this->x1 = 0; this->x2 = 0;
	}

	~X() {
		cout << "Объект был удалён." << '\n' << "Очистка памяти было завершена." << endl;
	}

	virtual int get_number_x1(){
		return x1;
	}

	virtual int get_number_x2() {
		return x2;
	}


	virtual void set_numbers(int x, int x2) {
		this->x1 = x; this->x2 = x2;
	}

	virtual void set_numbers(int x) {
		this->x1 = x;
	}


	virtual void print() {
		cout << "Значения x: " << this->x1 << "  " << this->x2 << endl;
	}
};
