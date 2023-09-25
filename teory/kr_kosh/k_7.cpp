#include <iostream>

using namespace std;

int main()
{
    //Элементы главной диагонали сделать 1, ниже 2, остальное 0
    cout<<"Введите количество строк: ";
    int numb;
    cin >> numb;
    string massiv[numb] = {};
    for(int i = 0; i < numb; i++){
        cout << "Ваша строка: ";
        cin >> massiv[i];
    }
    cout << "Введите разделитель: ";
    char raz;
    cin >> raz;
    string text = "";
    for(int j = 0; j < numb; j++){
        if (j < numb-1) text += massiv[j]+raz;
        else text += massiv[j];
    }
    cout << "Ваша строка: " << text;
}
