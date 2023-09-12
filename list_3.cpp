/*
    Тема занятия - Массивы.
    Имеются динамические и статические типы массивов.
*/

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    int size = 0; int sum = 0; int count = 0;
    cout << "Введите размер для 2-х массивов: " << endl;
    cin >> size;
    int arr[size] = {}; int arr_2[size] = {}; int arr_3[0] = {}; //сумма элементов первух двух, arifm, min, max
    srand(time(NULL)); //Обнуляем временные метки. Подключаем библ. \\ctime//
    //скидывает SIGNAL RANDOM 
    cout << "Заполнение массивов: " << endl;
    for (int i = 0; i < size; i++){
        cout << "Введите значения (" << i << ") для двух массивов: " << endl;
        arr[i] = 10+rand()%21; //10-нижний порог, порог 20 (единицу не включает в себя)
        cout << arr[i] << " Первый массив " << endl;
        arr_2[i] = 10+rand()%21;
        cout << arr_2[i] << " Второй массив " << endl;
    }
    int max = arr[0]; int min = arr[0];
    cout << "3-й массив равен: " << endl;
    for (int k = 0; k < size; k++){
        arr_3[k] = arr[k] + arr_2[k];
        cout << arr_3[k] << endl;
        if (arr_3[k] >= max){
            max = arr_3[k];
        }
        if (arr_3[k] <= min){
            min = arr_3[k];
        }
        sum += arr_3[k];
        count++;
    }
    cout << "Максимальное значение массива: " << max << endl;
    cout << "Минимальное значение массива: " << min << endl;
    cout << "Среднее арифмитическое массива: " << (sum/count) << endl;
    
}
    
