#include <iostream>
#include <ctime>

using namespace std;

int main() {
    cout << "Введите размер массива: "; int x = 0;
    cin >> x;
    int *massiv = new int[x];
    srand(time(NULL)); int c = 0;
    for(int i = 0; i < x; i++) {
        massiv[i] = 1+rand()%20;
        if ((massiv[i] / 3) > 0) c++;
    }
    int *massiv2 = new int[c];
    for(int j = 0; j < x; j++) {
        if (massiv[j] > 0) {
            massiv2[j] = (massiv[j] / 3);
        }
    }
    for(int i = 0; i<c; i++) {
        for(int j = 0; j<c; j++) {
            if (massiv2[i] > massiv2[j]) {
                int numb = massiv2[i];
                massiv2[i] = massiv2[j];
                massiv2[j] = numb;
            }
        }
    }
    for (int x = 0; x < c; x++) {
        cout << "x=" << x << " " << massiv2[x] << '\n';
    }
}
