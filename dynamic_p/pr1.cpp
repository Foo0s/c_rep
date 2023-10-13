#include <iostream>
#include <ctime>

using namespace std;

void sortMinElemArray(int** massiv, int x, int y);

void setArray(int** massiv, int length, int length_t) {
	srand(time(NULL));
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length_t; j++) {
			massiv[i][j] = -30 + rand() % 40;
		}
	}
	cout << "Compilied #1" << endl;
}

int main() {
	//Создать динамические массивы, используя указатели. Дан двумерный массив а
	//размером (n/m). Найти миним. элемент в каждой строке матрицы среди отрицат. элементов.
	setlocale(LC_ALL, "ru");
	cout << "Введите размер двумерного массива через enter: " << endl;
	int x; int y;
	cin >> x;
	cin >> y;
	int** massiv = new int*[x];

	for (int i = 0; i < x; i++) {
		massiv[i] = new int[y];
	}
	
	setArray(massiv, x, y);

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << massiv[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << "Compilied #2" << endl;
	cout << "\n";
	sortMinElemArray(massiv, x, y);
}


void sortMinElemArray(int** massiv, int x, int y) {
	for (int i = 0; i < x; i++) {
		int min = massiv[0][0];

		for (int j = 0; j < y; j++) {
			if (massiv[i][j] < 0 and massiv[i][j] <= min ) {
				min = massiv[i][j];
			}
		}
		cout << "Минимальное значение из отрицательных значений в строке #" << i << ": " << min << endl;
	}
}
