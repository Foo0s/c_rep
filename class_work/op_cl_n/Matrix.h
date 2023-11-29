#pragma once
#include "array.h"

class Matrix
{
    friend ostream& operator<< (ostream&, const Matrix&); // перегруженный оператор вывода
    friend istream& operator>> (istream&, Matrix&); // перегруженный оператор ввода
private:
    Array* ptr; // указатель на матрицу типа Array
    int size; // размер матрицы

public:
    Matrix();// конструктор по умолчанию
    Matrix(int, int); // конструктор с параметрами
    Matrix(Matrix& matrixToCopy); // конструктор копии
    ~Matrix(); // десструктор класса Matrix

    int getSize(); // возвратить количество объектов типа Array
    void setSize(const int, const int);
    Array* getPtr() const; // вернуть указатель на объект типа Array
    Array& operator[] (int); // перегруженная операция взятия индекса
    void setMatrix(); // заполнение матрицы
    void getMatrix(); // вывод матрицы
    int getSizeMat();
    int* search(const int key) const; // поиск по ключу
    Matrix operator+ (const Matrix& right);
    Matrix operator+= (const Matrix& right);
    Matrix operator- (const Matrix& right);
    const Matrix& operator= (const Matrix& right); // оператор присваивания
    bool operator== (const Matrix& right) const;// оператор сравнения
};
