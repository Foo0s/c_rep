#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	/*6-й вариант*/
	int x; int n = 1; int start = 20;
	cout << "Значение x: ";
	cin >> x;

	while (n != start) {
		int y = (pow(x, 2 * n - 2) / (2 * n + 1));
		cout << n << ". Значение y: " << y << endl;
		n++;
	}
}
