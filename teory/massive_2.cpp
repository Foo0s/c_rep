#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    /*
        Создать целочисленный массив от -5 до 52 вкл. После перезаписать
        все числа которые больше 10 на хранимое-10.
    */
    int massiv[10] = {};
    srand(time(NULL));
    cout<<"Заполнение массива: " << endl;
    
    for (int k = 0; k < 10; k++){
        massiv[k] = -5+rand()%52;
    }
    
    for (int k = 0; k < 10; k++){
        cout << "Элемент массива: " <<  massiv[k] << endl;
    }
    cout << "\n\n\n";
    for (int k = 0; k < 10; k++){
        if (massiv[k] > 10) massiv[k] = massiv[k]-10;
    }
    
    cout << "Новый массив: \n\n";
    for (int k = 0; k < 10; k++){
        cout << "Элемент нового массива: " <<  massiv[k] << endl;
    }
    return 0;
}
