#include <iostream>
#include <iomanip>
/*
    iomanip - осуществляет красивый вывод на консоли.
*/
using namespace std;
/*
    Двумерные массивы. Лекция.setw - создает пробелы.
*/

int main()
{
    int size_1;
    int size_2;
    cout << "Введите размер массива: " << endl;
    cin >> size_1 >> size_2;
    int arr[size_1][size_2] = {};
    
    for(int i = 0; i < size_1; i++){
        for(int j = 0; j < size_2; j++){
            cout << "Введите число: " << endl;
            int numb;
            cin >> numb;
            arr[i][j] = numb;
        }
    }
    
    cout << "Вывод матрицы: \n";
        for(int i = 0; i < size_1; i++){
            for(int j = 0; j < size_2; j++){
                cout << setw(4) << arr[i][j] << " ";
            }
            cout << "\n";
    }
    
    cout << "\n";
    for(int k = 0; k < size_1; k++){
        int count = 0;
        for(int s = 0; s < size_2; s++){
            count += arr[k][s];
        }
        cout << "Сумма строки (" << k+1 << ") равна: " << count << endl;
    }
    cout << "\n";
    for(int k = 0; k < size_1; k++){
        int count = 0;
        for(int s = size_2-1; s >= 0; s--){
            count += arr[s][k];
        }
        cout << "Сумма столбцов (" << k+1 << ") равна: " << count << endl;
    }
}
