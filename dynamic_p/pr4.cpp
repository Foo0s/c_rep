#include <iostream>
#include <ctime>

using namespace std;

void ShowArray(int** matrix, int x);


void UploadArray(int** array, int x) {
	srand(time(NULL));
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
	int* arr = new int[x];
	for (int i = 0; i < x; i++) {
		for (int j = 0; j<x; j++) {
			if (i == x) {
				break;
			}
			else {
				arr[i] = matrix[i][i+1];
			}
		}
	}

	for (int s = 0; s < x; s++) {
		for (int t = 0; t < x; t++) {
			if (arr[s] >= arr[t]) {
				int numb = arr[s];
				arr[s] = arr[t];
				arr[t] = numb;
			}
		}
	}

	for (int i = 0; i < x; i++) {
		for (int j = x-1; j < x; j++) {
			matrix[i][i+1] = arr[i];
		}
	}


	cout << "Вывод массива: <<" << endl;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}

}
