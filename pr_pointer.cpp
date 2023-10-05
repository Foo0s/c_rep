#include <iostream>
#include <cmath>

using namespace std;

int found_max_numb(int* numb1, int* numb2) {
	if (numb1 > numb2) {
		*numb1 *= 5; *numb2 -= 5;
	}
	else {
		*numb2 *= 5; *numb1 -=5;
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "RU");
	int x = 0; int y = 0;
	cout << "Введите значение x, y: " << endl;
	cin >> x; cin >> y;
	cout << "Значения до изменений: " << x << " " << y << endl;

	found_max_numb(&x, &y);
	cout << "Значения: " << x << " " << y << endl;
}
