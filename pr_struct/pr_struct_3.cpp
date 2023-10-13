#include <iostream>


using namespace std;


struct Sentr {
	int x;
	int y;
};


struct Circle {
	double radius;
	Sentr data;
};


struct result {
	double radius;
	Sentr data;
};

void createCircle(Circle* circle, int count);
void showResult(result* res, int count);

int main() {
	setlocale(LC_ALL, "ru");
	const int circle = 4;
	Circle new_circle[circle];
	createCircle(new_circle, circle);
	int countss = 0;
	for (int j = 0; j < circle; j++) {
		if (new_circle[j].radius > 1) {
			countss++;
		}
	}

	result* n_res = new result[countss];

	for (int i = 0; i < circle; i++) {
		if (new_circle[i].radius > 1) {
			n_res[i].radius = new_circle[i].radius;
			n_res[i].data.x = new_circle[i].data.x;
			n_res[i].data.y = new_circle[i].data.y;
		}
	}
	cout << "Compilied #2!";

	showResult(n_res, countss);
}


void createCircle(Circle* circle, int count) {
	for (int i = 0; i < count; i++) {
		cout << "Радиус: "; cin >> circle[i].radius;
		cout << "Х-координата: "; cin >> circle[i].data.x;
		cout << "Y-координата: "; cin >> circle[i].data.y;
	}
	cout << "Complied!" << endl;
}


void showResult(result* res, int count) {
	for (int i = 0; i < count; i++) {
		cout << '\n';
		cout << "Радиус: " << res[i].radius << endl;
		cout << "X: " << res[i].data.x << endl;
		cout << "Y: " << res[i].data.y << endl;
	}
}
