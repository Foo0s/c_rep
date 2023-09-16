#include <iostream>
#include <ctime>

using namespace std;

void Main(){
    cout << "Работа с массивами." << endl;
    cout << "Введите число 1: вывести массив \n";
    cout << "Введите число 2: вывести минимальное число из массива\n";
    cout << "Введите число 3: вывести максимальное число из массива\n";
    cout << "Введите число 4: вывести положительные элементы стоящие на нечётных позициях\n";
    cout << "Введите число 5: подсчитать произведение отрицательных элементов стоящих на четных позициях\n";
    cout << "Введите число 6: подсчитать среднее арифмитическое значение массива\n";
    cout << "Введите число 7: переписать массив, все нечётные элементы массива возвести в квадрат, а на чётных позициях в куб\n";
}

int max(int *d, int t){
    int max = d[0];
    for (int i = 0; i < t; i++){
        if (max <= d[i]) {
            max = d[i];
        }
    }
    return max;
}

int min(int *d, int t){
    int min = d[0];
    for (int i = 0; i < t; i++){
        if (min >= d[i]){
            min = d[i];
        }
    }
    return min;
}

double arifm(int *d, int t){
    int c_mass = 0; int c_el = 0;
    for (int i = 0; i < t; i++){
        c_mass += d[i];
        c_el++;
    }
    return (c_mass / c_el);
}

int main(){
    Main();
    int menu; int size;
    
    cout << "Cоздание массива: \n";
    cout << "Введите размер массива: ";
    cin >> size;
    int massiv[size];
    for (int i = 0; i < size; i++){
        cout << "Введите число: ";
        cin >> massiv[i];
        cout << "\n";
    }
    
    m1:
        cout << "Введите пункт меню: ";
        cin >> menu;
        switch (menu){
            case 1: 
                for (int k = 0; k < size; k++){
                    cout << k+1 << " Элемент массива: " << massiv[k] << ";\n";
                }; break;
            case 2:
                cout << "Минимальное число массива: " << min(massiv, size) << "\n"; break;
            case 3: 
                cout << "Максимальное число массива: " << max(massiv, size) << "\n"; break;
            case 4:
                cout << "Вывод четных чисел, стоящих на нечётных позициях\n";
                for (int i = 0; i < size; i++){
                    if (massiv[i] % 2 == 0 && (i % 2 != 0)){
                        cout << "Число " << i << ": " << massiv[i] << "\n";
                    }
                }; break;
            
            case 5:
                cout << "Подсчитать произведение отрацительных элементов стоящих на чётных позициях\n";
                int podshet;
                for (int i = 0; i < size; i++){
                    if (massiv[i] < 0 && (i % 2 == 0)){
                        podshet *= massiv[i];
                    }
                };
                cout << "Произведение: " << podshet << ";\n"; break;
                
            case 6:
                cout << "Подсчитать среднее арифмитическое массива\n";
                cout << "Среднее арифмитическое = " << arifm(massiv, size) << "\n"; break;
            case 7:
                cout << "Массив, все нечётные элементы массива возвести в квадрат, а на чётных позициях в куб";
                for (int i = 0; i < size; i++){
                    if (massiv[i] % 2 != 0) {
                        massiv[i] *= massiv[i];
                    }
                    else {
                        massiv[i] *= (massiv[i]*massiv[i]);
                    }
                }
                break;
        }
        cout << "Хотите продолжить работа цикла:\n1-Yeas | 2-No: ";
        int flag;
        cin >> flag;
        if (flag == 2){
            goto m2;
        }
        else{
            goto m1;
        }
    m2:
        cout << "Конец программы." << endl;
}
