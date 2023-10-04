#include <iostream>
#include <ctime>

using namespace std;
/*
    Работа с указателями, ссылками.
    Задача 1.
*/
double* DelListing(double* arr);
double* create(double* arr, int size);
double* sqrt_arr(double* arr, int size);
void count_number(double* arr, int size);
void multiply_arr(double* arr, int size);
void max_min_arr(double* arr, int size);

void createList(double* arr, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

void showList(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void menu() {
    cout << "Меню:\n1. Посчитать кол-во чётных и нечётных элементов\n2. Посчитать произведение элементов стоящих на чётных позициях\n3. Возвести в квадрат элементы стоящие на нечётных позициях\n4. Выявить максимальный и минимальный элемент и посчитать их количество\n 5. Вывести массив" << endl;
}

void selMenu(double* arr, int choice_s, int size) {
    switch (choice_s) {
    case 1: count_number(arr, size); break;
    case 2: multiply_arr(arr, size); break;
    case 3: showList(sqrt_arr(arr, size), size); break;
    case 4: max_min_arr(arr, size); break;
    case 5: showList(arr, size); break;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    double* array = 0; int userAnswer = 0;
    do {
        int sizeOff = 1;
        cout << "Введите размер массива: " << endl;
        cin >> sizeOff;
        array = create(array, sizeOff);
        createList(array, sizeOff);
        showList(array, sizeOff);
        menu();
        int choice = 0;
        cout << "Ваш выбор: ";
        cin >> choice;
        selMenu(array, choice, sizeOff);
        cout << "Чтобы продолжить введите 1. 0 - Конец\n";
        cin >> userAnswer;
        if (userAnswer == 0) cout << "Конец работы программы. Удаление массива: "<< DelListing(array) << endl;
        else{
            continue;
        }
    } while (userAnswer > 0);
}

void count_number(double* arr, int size) {
    int count_ch = 0, count_nch = 0;
    for (int i = 0; i < size; i++) {
        if ((int) arr[i] % 2 == 0) count_ch++;
        else count_nch++;
    }
    cout << "Количество чётных элементов: " << count_ch << endl;
    cout << "Количество нечётных элементов: " << count_nch << endl;
}

void multiply_arr(double* arr, int size) {
    int result = 1;
    for (int i = 0; i < size; i++) {
        if(i % 2 == 0) result *= arr[i];
    }
    cout << "Произведение элементов = " << result << endl;
}

double* sqrt_arr(double* arr, int size) {
    for (int j = 0; j < size; j++) {
        if(j % 2 != 0) arr[j] = arr[j] * arr[j];
    }
    return arr;
}
    
void max_min_arr(double* arr, int size) {
    double max = arr[0]; double min = arr[0];
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) max = arr[i];
        if (min > arr[i]) min = arr[i];
    }
    int count_min_max = 0;
    for (int j = 0; j < size; j++) {
        if (arr[j] == max) count_min_max++;
        if (arr[j] == min) count_min_max++;
    }
    cout << "Минимальный элемент = " << min << "\nМаксимальный элемент = " << max << endl;
    cout << "Количество минимальных и максимальных элементов = " << count_min_max << endl;
}
int node(int a, int b) {
    if (b == 0) return a;
    return node(b, a % b);
}

double* DelListing(double* arr) {
    delete[] arr;
    arr = 0; return arr;
}

double* create(double* arr, int size) {
    arr = new double[size];
    return arr;
}
