
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
    int size_1 = 9;
    int size_2 = 9;
    int arr[size_1][size_2] = {};
    for(int i = 1; i <= size_1; i++){
        for(int j = 1; j <= size_2+1; j++){
            arr[i-1][j-1] = i*j;
        }
    }
    cout << "\n";
    for(int k = 0; k < size_1; k++){
        for(int s = 0; s < size_2; s++){
            cout<<setw(2)<<arr[k][s]<<" ";
        }
        cout << "\n";
    }
}
