#include <iostream>
#include <ctime>

using namespace std;

void ShowArray(int** matrix, int x);


void UploadArray(int** array, int x) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			array[i][j] = -5 + rand() % 40;
			cout << array[i][j] << ' ';
		}
		cout << "\n";
	}
}


int main() {

	//Создать динамические массивы, используя казатели. Дан двумерный массив а,
	//размером n/n или квадратная матрица. Найти сумму номеров мин. и макс. элементов ее главной диагонали.

	setlocale(LC_ALL, "ru");

	cout << "Введите размер матрицы: " << endl;
	int n; cin >> n;
	int** matrix = new int*[n];

	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n];
	}

	//Заполнение
	UploadArray(matrix, n);
	
	//Вывод
	ShowArray(matrix, n);
}


void ShowArray(int** matrix, int x) {
	int min = matrix[0][0]; int indx = 0;
	int max = matrix[1][1]; int indx2 = 0;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < 1; j++) {
			if (matrix[i][i] <= min) {
				min = matrix[i][i];
				indx = i;
			}
			else if (matrix[i][i] >= max) {
				max = matrix[i][i];
				indx2 = i;
			}
		}
	}
	cout << "Сумма минимального и максимального элемента на главной диагонали = " << min + max << endl;
	cout << "Сумма идентификаторов = " << indx + indx2 << endl;
}
