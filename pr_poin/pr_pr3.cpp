#include <iostream>
#include <ctime>

using namespace std;

int main() {
    cout << "Введите размер 1-го массива: " << endl;
    int x; int y;
    cin >> x;
    cout << "Введите размер 2-го массива: " << endl;
    cin >> y;
    
    int *list1 = new int[x];
    int *list2 = new int[y];
    srand(time(NULL));
    int count = 0; int count2 = 0;
    for(int i = 0; i < x; i++) {
        list1[i] = -30+rand()%40;
        if (list1[i] >= 0) {
            count += 1;
        }
    }
    for(int j = 0; j < y; j++) {
        list2[j] = -30+rand()%40;
        if (list2[j] >= 0) {
            count2 += 1;
        }
    }
    
    if (count >= count2) {
        cout << "В первом массиве больше положительных элементов." << endl;
        for (int i = 0; i < y; i++) {
            cout << i << ": " << list1[i] << ' ';
        }
        cout << '\n';
        cout << "Количество положительных элементов: " << count;
    }
    else{
        cout << "Во втором массиве больше положительных элементов." << endl;
        for (int i = 0; i < y; i++) {
            cout << i << ": " << list2[i] << ' ';
        }
        cout << '\n';
        cout << "Количество положительных элементов: " << count2;
    }
    
}
