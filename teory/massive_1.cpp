#include <iostream>
#include <ctime>
using namespace std;

int main(){
    /*
        Заполнить массив из 50 нечетных чисел, рандомом. От 1 до 99 включительно.
    */
    int massive[50] = {};
    cout << "Заполнение массива: " << endl;
    srand(time(NULL)); //Обнуление временных меток.
    for (int i = 0; i < 50; i++){
        massive[i] = 1+rand()%100;
    }

    for (int i = 0; i < 50; i++){
        cout << massive[i] << endl;
    }
}