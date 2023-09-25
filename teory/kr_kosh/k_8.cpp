#include <iostream>

using namespace std;

int main()
{
    //Элементы главной диагонали сделать 1, ниже 2, остальное 0
    cout<<"Введите размер массива: ";
    int numb;
    cin >> numb;
    int massiv[numb] = {};
    for(int i = 0; i < numb; i++){
        cout << "Ваша число: ";
        cin >> massiv[i];
    }
    
    cout << "Введите индекс для удаления: ";
    int index;
    cin >> index;
    massiv[index] = 0;
    cout << "Вывод массива: ";
    for(int i = 0; i < numb; i++){
        cout << massiv[i] << " ";
    }
}
