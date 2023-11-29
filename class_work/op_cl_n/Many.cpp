#include "many.h"

#include <iostream>

#include <iomanip> // для манипулятора setw
using namespace std;
Many::Many() // конструктор по умолчанию
{
    size = 10; // по умолчанию размер множества = 10 объектам типа Matrix
    ptr = new Matrix[size]; // выделить место в памяти для множества
    for (int ix = 0; ix < size; ix++) // обнуляем множество
        for (int jx = 0; jx < getSizeMat(); jx++)
            for (int zx = 0; zx < getPtr()->getSize(); zx++)
                ptr[ix][jx][zx] = 0;
}

Many::Many(int manySize, int matrixSize, int arraySize) // конструктор с параметрами
{
    size = (manySize > 0 ? manySize : 10); // количество матриц

    ptr = new Matrix[size]; // выделить место в памяти для множества

    for (int ix = 0; ix < size; ix++) // перераспределяем выделенную память
        ptr[ix].setSize(matrixSize > 0 ? matrixSize : 10, arraySize > 0 ? arraySize : 10); // количество столбцов
    //cout << size << "  " << ptr->getSize() << "  " << ptr->getPtr()->getSize() << std::endl;
    for (int ix = 0; ix < size; ix++) // обнуляем множество
        for (int jx = 0; jx < ptr->getSizeMat(); jx++)
            for (int zx = 0; zx < ptr->getPtr()->getSize(); zx++)
                ptr[ix][jx][zx] = 0;
    //    cout << size << "  " << ptr->getSize() << "  " << ptr->getPtr()->getSize() << std::endl;

}

Many::Many(Many& manyToCopy) // конструктор копии
    :size(manyToCopy.size)              // инициализатор размера множества
{
    //    cout << size << "  " << manyToCopy.getSize() << "  " << manyToCopy.getPtr()->getSize() << std::endl;
    ptr = new Matrix[size]; // выделить место в памяти для матрицы

    for (int ix = 0; ix < size; ix++) // перераспределяем выделенную память
        ptr[ix].setSize(manyToCopy.getSizeRow(), manyToCopy.getSizeCol()); // количество строк и столбцов

    for (int ix = 0; ix < size; ix++) // обнуляем множество
        for (int jx = 0; jx < ptr->getSizeMat(); jx++)
            for (int zx = 0; zx < ptr->getPtr()->getSize(); zx++)
                ptr[ix][jx][zx] = manyToCopy[ix][jx][zx];// заполняем множество
}

Many::~Many() // десструктор класса Many
{
    delete[] ptr; // освободить память, удалив матрицу
}

// перегруженный оператор вывода для класса Matrix (вывод элементов массива на экран)
ostream& operator<< (ostream& output, const Many& obj)
{
    if (obj.getSizeMany() == 0)
        cout << "Множество пустое!\n";

    for (int ix = 0; ix < obj.getSizeMany(); ix++)
    {
        for (int jx = 0; jx < obj.getSizeRow(); jx++)
        {
            for (int zx = 0; zx < obj.getSizeCol(); zx++)
            {
                output << setw(5) // под каждое число выделяется 5 позиций
                    << obj.ptr[ix][jx][zx];
            }
            cout << std::endl;
        }
        cout << std::endl << "----------------------------------------------------------------------\n";
    }

    output << std::endl; // перенос маркера на новую строку

    return output; // позволяет множественный вывод, типа cout << x << y << z << ...
}

// перегруженный оператор ввода, для заполнения матрицы с клавиатуры
istream& operator>> (istream& input, Many& obj)
{
    for (int ix = 0; ix < obj.size; ix++)
        for (int jx = 0; jx < obj.getSizeRow(); jx++)
            for (int zx = 0; zx < obj.getSizeCol(); zx++)
                input >> obj.ptr[ix][jx][zx]; // заполняем множество

    return input; // позволяет множественный ввод, типа cin >> x >> y >> z >> ...
}

// перегруженный оператор взятия индекса
Matrix& Many::operator[] (int subscript)
{
    if (subscript < 0 || subscript >= size)
    {
        std::cerr << "\n Ошибка индекса2: " << subscript << std::endl;
        exit(1); // завершить работу программы, неправильный индекс
    }
    return ptr[subscript]; // возврат ссылки на элемент массива
}

int Many::getSizeMany() const // возвратить количество элементов множества
{
    return size;
}

void Many::getMany() // вывод массива
{
    for (int ix = 0; ix < getSizeMany(); ix++)
    {
        for (int jx = 0; jx < getSizeRow(); jx++)
        {
            for (int zx = 0; zx < getSizeCol(); zx++)
            {
                cout << setw(5) // под каждое число выделяется 5 позиций
                    << ptr[ix][jx][zx];
            }
            cout << std::endl;
        }
        cout << std::endl << "----------------------------------------------------------------------\n";
    }

    cout << std::endl; // новая строка
}

void Many::setMany() // заполнение массива
{
    for (int ix = 0; ix < getSizeMany(); ix++)
        for (int jx = 0; jx < getSizeRow(); jx++)
            for (int zx = 0; zx < getSizeCol(); zx++)
                cin >> ptr[ix][jx][zx];       // ввод элементов множества с клавиатуры
}

const Many& Many::operator= (const Many& right) // оператор присваивания
{
    if (&right != this) // чтобы не выполнялось самоприсваивание
    {
        if (size != right.getSizeMany() ||
            getSizeRow() != right.getSizeRow() || getSizeCol() != right.getSizeCol())
        {
            delete[] ptr; // освободить пространство
            size = right.getSizeMany(); // установить нужный размер множества
            ptr = new Matrix[size]; // выделить память под копируемое множество

            for (int ix = 0; ix < size; ix++) // перераспределяем выделенную память
                ptr[ix].setSize(right.getSizeRow(), right.getSizeCol());
        }

        for (int ix = 0; ix < size; ix++)
            for (int jx = 0; jx < ptr->getSizeMat(); jx++)
                for (int zx = 0; zx < ptr->getPtr()->getSize(); zx++)
                    ptr[ix][jx][zx] = right.ptr[ix][jx][zx]; // скопировать массив
    }

    return *this; // разрешает множественное присваивание, например x = t = e
}

bool Many::operator== (const Many& right) const// оператор сравнения
{
    if (size != right.getSizeMany() ||
        getSizeRow() != right.getSizeRow() || getSizeCol() != right.getSizeCol())
        return false; // матрицы с разным количеством элементов

    for (int ix = 0; ix < size; ix++)
        for (int jx = 0; jx < ptr->getSizeMat(); jx++)
            for (int zx = 0; zx < ptr->getPtr()->getSize(); zx++)
                if (ptr[ix][jx][zx] != right.ptr[ix][jx][zx])
                    return false; // матрицы не равны

    return true; // матрицы равны
}

Many& Many::operator- (void) // оператор удаления элемента по номеру
{
    Many temp(*this); // временно сохраняем текущее множество

    delete[] ptr; // удаляем старое множество
    size -= 1; // изменяем текущий размер

    ptr = new Matrix[size]; // выделить место в памяти для множества

    for (int ix = 0; ix < size; ix++) // перераспределяем выделенную память
        ptr[ix].setSize(temp.getSizeRow(), temp.getSizeCol()); // количество строк и столбцов

    for (int ix = 0; ix < size; ix++)
    {
        for (int jx = 0; jx < temp.getSizeRow(); jx++)
            for (int zx = 0; zx < temp.getSizeCol(); zx++)
                ptr[ix][jx][zx] = temp[ix][jx][zx];// заполняем множество
    } //конец for

    return *this;
}

Many Many::operator- (const Many& right) // разница двух множеств
{
    if (size != right.getSizeMany() ||
        getSizeRow() != right.getSizeRow() || getSizeCol() != right.getSizeCol())
    {
        cout << "Множества разного размера!\n";
        exit(1); // завершить работу программы
    }

    Many result(*this);
    for (int ix = 0; ix < result.getSizeMany(); ix++)
        for (int jx = 0; jx < result.getSizeRow(); jx++)
            for (int zx = 0; zx < result.getSizeCol(); zx++)
                result.ptr[ix][jx][zx] = ptr[ix][jx][zx] - right.ptr[ix][jx][zx];

    return result; // вернуть сумму
}

Many Many::operator+ (const Many& right) // объединение двух множеств
{
    if (getSizeRow() != right.getSizeRow() || getSizeCol() != right.getSizeCol())
    {
        cout << "Множества разного размера!\n";
        exit(1); // завершить работу программы
    }

    int num = size + right.getSizeMany(); // количество элементов нового множества

    Many result(num, right.getSizeRow(), right.getSizeCol());

    for (int ix = 0; ix < getSizeMany(); ix++)
        for (int jx = 0; jx < getSizeRow(); jx++)
            for (int zx = 0; zx < getSizeCol(); zx++)
                result.ptr[ix][jx][zx] = ptr[ix][jx][zx];

    int ctr = 0;
    for (int ix = getSizeMany(); ix < result.getSizeMany(); ix++)
    {
        for (int jx = 0; jx < result.getSizeRow(); jx++)
            for (int zx = 0; zx < result.getSizeCol(); zx++)
                result.ptr[ix][jx][zx] = right.ptr[ctr][jx][zx];
        ctr++;
    }

    return result; // вернуть объединенные множества
}

Many Many::operator+= (const Many& right) // объединение двух множеств
{
    if (getSizeRow() != right.getSizeRow() || getSizeCol() != right.getSizeCol())
    {
        cout << "Множества разного размера!\n";
        exit(1); // завершить работу программы
    }
    Many temp(*this);
    delete[] ptr;

    size += right.getSizeMany(); // количество элементов нового множества

    ptr = new Matrix[size];

    for (int ix = 0; ix < size; ix++) // перераспределяем выделенную память
        ptr[ix].setSize(temp.getSizeRow(), temp.getSizeCol()); // количество строк и столбцов

    for (int ix = 0; ix < temp.getSizeMany(); ix++)
        for (int jx = 0; jx < temp.getSizeRow(); jx++)
            for (int zx = 0; zx < temp.getSizeCol(); zx++)
                ptr[ix][jx][zx] = temp.ptr[ix][jx][zx];

    int ctr = 0;
    for (int ix = temp.getSizeMany(); ix < temp.getSizeMany(); ix++)
    {
        for (int jx = 0; jx < temp.getSizeRow(); jx++)
            for (int zx = 0; zx < temp.getSizeCol(); zx++)
                ptr[ix][jx][zx] = right.ptr[ctr][jx][zx];
        ctr++;
    }

    return *this; // вернуть объединенные множества
}

Many Many::operator+ (Matrix& right) // добавление элемента в множество
{
    if (getSizeRow() != right.getSizeMat() || getSizeCol() != right.getPtr()->getSize())
    {
        cout << "Множества разного размера!\n";
        exit(1); // завершить работу программы
    }

    //     int num = size + right.getSizeMany(); // количество элементов нового множества

    Many result(size + 1, right.getSizeMat(), right.getPtr()->getSize());

    for (int ix = 0; ix < result.getSizeMany() - 1; ix++)
        for (int jx = 0; jx < result.getSizeRow(); jx++)
            for (int zx = 0; zx < result.getSizeCol(); zx++)
                result.ptr[ix][jx][zx] = ptr[ix][jx][zx];

    for (int jx = 0; jx < result.getSizeRow(); jx++)
        for (int zx = 0; zx < result.getSizeCol(); zx++)
            result.ptr[result.getSizeMany() - 1][jx][zx] = right.getPtr()[jx][zx];

    return result; // вернуть объединенные множества
}

Many& Many::operator+= (Matrix& right) // добавление элемента в множество
{
    if (getSizeRow() != right.getSizeMat() || getSizeCol() != right.getPtr()->getSize())
    {
        cout << "Множества разного размера!\n";
        exit(1); // завершить работу программы
    }
    Many temp(*this);
    delete[] ptr;

    size += 1; // количество элементов нового множества

    ptr = new Matrix[size];

    for (int ix = 0; ix < size; ix++) // перераспределяем выделенную память
        ptr[ix].setSize(temp.getSizeRow(), temp.getSizeCol()); // количество строк и столбцов

    for (int ix = 0; ix < temp.getSizeMany(); ix++)
        for (int jx = 0; jx < temp.getSizeRow(); jx++)
            for (int zx = 0; zx < temp.getSizeCol(); zx++)
                ptr[ix][jx][zx] = temp.ptr[ix][jx][zx];

    for (int jx = 0; jx < getSizeRow(); jx++)
        for (int zx = 0; zx < getSizeCol(); zx++)
            ptr[getSizeMany() - 1][jx][zx] = right.getPtr()[jx][zx];

    return *this; // вернуть объединенные множества
}
