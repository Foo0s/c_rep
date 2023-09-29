#include <iostream>
#include <ctime>

using namespace std;
/*
    Работа с указателями, ссылками.
    Задача 1.
*/
double* DelListing(double* arr);
double* create(double* arr, int size);

void createList(double* arr, int size){
    srand(time(NULL));
    for(int i = 0; i < size; i++){
        arr[i] = rand()%100;
    }
}

void showList(double* arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}


int main()
{
    double* array = 0; char userAnswer = 0;
    do{
        int sizeOff = 1;
        cout << "Введите размер массива: " << endl;
        cin >> sizeOff;
        array = create(array, sizeOff);
        createList(array, sizeOff);
        showList(array, sizeOff);
        DelListing(array);
        cout << "Чтобы продолжить введите 1. 0 - Конец\n";
        cin >> userAnswer;
    } while (userAnswer > 0);
}

int node(int a, int b){
    int answer_number;
    if (b==0) return a;
    return node(b, a%b);
}

double* DelListing(double* arr){
    delete[] arr;
    arr = 0; return arr;
}

double* create(double* arr, int size){
    arr = new double[size];
    return arr;
}
