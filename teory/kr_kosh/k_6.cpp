#include <iostream>

using namespace std;

int main()
{
    //Элементы главной диагонали сделать 1, ниже 2, остальное 0
    cout<<"Введите число размер массива: ";
    int numb;
    cin >> numb;
    int massiv[numb][numb] = {};
    cout << "Заполение массива..." << endl;
    for(int i = 0; i < numb; i++){
        for(int j = 0; j < numb; j++){
            if (i-j == 0) massiv[i][j] = 1;
            else if (i-j > 0) massiv[i][j] = 2;
            else massiv[i][j] = 0;
        }
    }
    
    for(int i = 0; i < numb; i++){
        for(int j = 0; j < numb; j++){
            cout << massiv[i][j] << " ";
        }
        cout << "\n";
    }
}
