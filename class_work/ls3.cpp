#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    cout<<"Введите размер массива: \n\n";
    int n; int m;
    cin >> n; cin >> m;
    int array[n][m] = {};
    srand(time(NULL));
    cout << "\n";
    for(int i=0; i < n; i++){
        for(int j=0; j<m; j++){
            int rands = -15+rand()%66;
            cout << rands << " ";
            array[i][j] = rands;
        }
        cout << "\n";
    }
    
    cout << "Подсчет значений в строках и в столбцах: " << endl;
    cout << "\n";
    int arifm2;
    for(int i=0; i < n; i++){
        int count = 0; int count_2 = 0;
        for(int j=0; j<m; j++){
            count += array[i][j];
            count_2 += array[j][i];
            arifm2 += array[i][j];
        }
        cout << "Сумма " << i+1 << " строки и столбца: " << count << " " << count_2 << "\n";
    }
    
    cout << "\n";
    cout << "Перезапись элементов: \n";
    int arifm;
    for(int i=0; i < n; i++){
        int count = 0; int count_2 = 0;
        for(int j=0; j<m; j++){
            if (j % 2 == 0) array[i][j] = pow(array[i][j], 5);
            else array[i][j] = pow(array[i][j], 2);
            arifm += array[i][j];
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Среднее арифмитическое изменённой матрицы: " << (double) arifm / (n*m) << "\n";
    cout << "Среднее арифмитическое матрицы(об.): " << (double) arifm2 / (n*m);
}
