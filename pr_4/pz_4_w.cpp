/*
6-ой вариант Скляров Владимир Дмитриевич.
*/

#include <iostream>
using namespace std;

int main(){
    cout << "Введите размер массива: " << endl;
    int x; cin >> x; int y = 0;
    int arr[x] = {};
    for (int i = 0; i < x; i++){
        cout << "Введите число: ";
        cin >> y;
        arr[i] = y;
        cout << "\nЭлемент " << i << " равен: " << arr[i] << "\n";
    }
    cout << "Введите число на которое хотите сдвинуть элементы массива влево: " << endl;
    int z = 0;
    cin >> z;
    
    for (int i = 0; i < x;  i++){
        int numb = arr[i];
        arr[i] = arr[i+z];
        arr[i+z] = numb;
    }
    
    for (int i = 0; i < x; i++){
        cout << arr[i] << " ";
    }
}