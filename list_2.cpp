#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int size = 0; int sum = 1;
    cout << "Введите размер массива: " << endl;
    cin >> size;
    int arr[size] = {};
    int max = arr[0]; int min = 10000;
    for (int i = 0; i < size; i++){
        cout << "Введите i-элемент:(" << i+1 << ")" << ": " << endl;
        cin >> arr[i];
    }
    cout << "\n\nВывод содержимого массива: " << endl;
    for (int k = 0; k < size; k++){
        cout << arr[k] << " ";
    }
    cout << "\n\nВывод суммы: " << endl;
    for (int k = 1; k < size; k += 2){
        sum *= arr[k];
    }
    for (int i = 0; i < size; i++){
        if (arr[i] >= max){
            max = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Сумма: " << sum << endl;
    cout << "Минимум: " << min << '\n' << "Максимум: " << max << endl;
}
