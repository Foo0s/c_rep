#include <iostream>

using namespace std;

int main()
{
    //Нужно найти уникальные элементы в списке.
    cout<<"Введите число размер массива: ";
    int numb;
    cin >> numb;
    int massiv[numb] = {};
    cout << "Заполение массива..." << endl;
    for(int i = 0; i < numb; i++){
        cout << "Введите число: ";
        cin >> massiv[i];
    }
    
    for(int i = 0; i < numb; i++){
        int count = 0;
        for(int j = 0; j < numb; j++){
            if (massiv[i] == massiv[j]) count++;
        }
        if (count <= 1){
            cout << "Элемент встречающееся 1 раз: " << massiv[i] << endl;
        }
    }
}
