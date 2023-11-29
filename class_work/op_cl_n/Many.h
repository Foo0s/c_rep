#pragma once
#include "matrix.h"
class Many : public Matrix
{
    friend ostream& operator<< (ostream&, const Many&); // перегруженный оператор вывода
    friend istream& operator>> (istream&, Many&); // перегруженный оператор ввода
private:
    Matrix* ptr; // указатель на массив объектов Matrix
    int size; // количество элементов множества
public:
    Many(); // конструктор по умолчанию
    Many(int, int, int); // конструктор с параметрами
    Many(Many&); // конструктор копии
    ~Many(); // десструктор класса Many

    Matrix& operator[] (int); // перегруженная операция взятия индекса
    int getSizeMany() const; // возвратить количество объектов типа Matrix
    int getSizeRow() const
    {
        return ptr->getSizeMat();
    }

    int getSizeCol() const
    {
        return ptr->getPtr()->getSize();
    }

    void getMany(); // вывод множества
    void setMany(); // заполнение множества
    const Many& operator= (const Many&); // оператор присваивания
    bool operator== (const Many& right) const;// оператор сравнения
    Many& operator- (/*const int & */); // оператор удаления элемента множества по номеру
    Many operator- (const Many& right);
    Many operator+ (const Many& right); // объединение двух множеств
    Many operator+= (const Many& right); // объединение двух множеств
    virtual Many operator+ (Matrix& right); // добавление элемента в множество
    virtual Many& operator+= (Matrix& right); // добавление элемента в множество
};
