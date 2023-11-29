#pragma once
#include <istream>
#include <ostream>
using namespace std;
class Array
{
    friend istream& operator>> (istream&, Array&); // перегруженный оператор ввода
    friend ostream& operator<< (ostream&, const Array&); // перегруженный оператор вывода
private:
    int* ptr; // указатель на массив
    int size; // размер массива
public:
    Array(); // конструктор по умолчаниюa
    Array(int); // конструктор с параметрами
    Array(const Array&); // конструктор копии
    ~Array(); // десструктор

    int getSize() const; // возвратить количество элементов массива
    void setSize(const int);
    void setArray(); // заполнение массива
    void getArray(); // вывод массива
    const Array& operator= (const Array&); // оператор присваивания
    bool operator== (const Array&) const; // оператор сравнения
    int& operator[] (int);
    Array operator+ (const Array&);
    Array& operator+= (const int&); // оператор добавления элемента в конец массива
    Array& operator- (const int&); // оператор удаления элемента по ключу
    int search(const int) const;
    void choicesSort(); // сортировка выбором

};
