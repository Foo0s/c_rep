#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//Создать двумерный массив 5х5, написать функцию, заполнение от 30 до 60,
//Создать 2 функции для нахождения мин, макс знач массива
const int size=5;
int max(int massiv[][size], int size);
int min(int massiv[][size], int size);

void function(int massiv[][size], const int size){
    srand(time(NULL));
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            massiv[i][j] = 30+rand()%30;   
            cout << massiv[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int massiv[size][size] = {};
    function(massiv, size);
    cout << "Максимальное значение: " << max(massiv, 5) << endl;
    cout << "Минимальное значение: " << min(massiv, 5);
}


int max(int massiv[][size], const int size){
    int max = 0;
    for(int k = 0; k < size; k++){
        for(int i = 0; i < size; i++){
            if (max < massiv[k][i]) max = massiv[k][i];
        }
    }
    return max;
}

int min(int massiv[][size], const int size){
    int min = massiv[0][0];
    for(int k = 0; k < size; k++){
        for(int i = 0; i < size; i++){
            if (min > massiv[k][i]) min = massiv[k][i];
        }
    }
    return min;
}
