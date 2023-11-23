#include <iostream>
#include "X.cpp"

using namespace std;

class Y:public X {
	private:

		int y;

	public:

		Y(const int x1, const int x2, const int y):X(x1, x2) {
			this->y = y;
		}

		virtual int get_numbers() {
			return y;
		}

		virtual void set_numbers(int y) {
			this->y = y;
		}

		virtual void set_numbers(int x1, int x2, int y) {
			this->x1 = x1; this->x2 = x2;
			this->y = y;
		}

		virtual void print() {
			cout << "Значение y: " << this->y << endl;
		}

		void Run() {
			int x3 = get_number_x1();
			int x4 = get_number_x2();
			cout << "Результат: " << (x3 + x4)*this->y << endl;
		}
};
