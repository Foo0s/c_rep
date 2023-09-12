
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int size = 0; int sum = 0;
    cout << "Введите размер массива: " << endl;
    cin >> size;
    int arr[size] = {};
    for (int i = 0; i < size; i++){
        cout << "Введите i-элемент:(" << i+1 << ")" << ": " << endl;
        cin >> arr[i];
    }
    cout << "\n\nВывод содержимого массива: " << endl;
    for (int k = 0; k < size; k++){
        cout << arr[k] << endl;
    }
    cout << "\n\nВывод суммы: " << endl;
    for (int k = 0; k < size; k++){
        if (arr[k] < 0){
            sum += arr[k];
        }
    }
    cout << "Сумма: " << sum << endl;
}
    
