/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
                cout << setw(2) << arr[i][j] << " ";
            }
            cout << "\n";
    }
    
    cout << "\n";
    for(int k = 0; k < size_1; k++){
        int count = 0;
        for(int s = 0; s < size_2; s++){
            count += arr[k][s];
        }
        cout << "Сумма строки (" << k << ") равна: " << count << endl;
    }
}
