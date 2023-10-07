// Project6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;

//Структра под именем Студент, в ней хранить фамилия, имя, группа, возраст и оценки, массив из 5 элементов.
//Создать программу. 1. Пользователь вводит инфу руками состоящий из 5 структур типа студент. 2. Вывести в табличной форме весь данный массив. 3. Вывести на экран список студентов, среднгяя оценка которых больше 4. Упорядочить массив по возрасту. *Сделать программу эту но по моделям.

struct Student {
    char surname[45];
    char name[32];
    char group[20];
    int age;
    int numbers[5];
};

void showData(Student* std, int c_std);
Student* AddInfo_for_Student(Student* student, const int c_std);
Student* setData_student(Student* student, int c_stud);


void menu() {
    cout << "2. Вывод информации в виде таблицы: " << endl;
    cout << "3. Вывод всех студентов, средняя оценка которых больше 4: " << endl;
    cout << "4. Упорядочивание массива по возрасту, его вывод: " << endl;
}

void choice_menu_tab(int choice, Student* std, int count) {
    switch (choice) {
    case 2: showData(std, count);
    default: cout << "Ошибка";
    }
}
int main()
{

    setlocale(LC_ALL, "ru");
    int count_student = 0;
    cout << "Введите количество студентов: "; cin >> count_student;
    cout << "Список функции:\n";
    Student* new_student = 0;


    new_student = AddInfo_for_Student(new_student, count_student);
    setData_student(new_student, count_student);
    cout << "\n";
    menu();
    cout << "Введите ваш выбор: ";
    int choice; cin >> choice;
    choice_menu_tab(choice, new_student, count_student);
}


Student* AddInfo_for_Student(Student* student, const int c_std) {
    Student* stud = new Student[c_std];
    return stud;
}


Student* setData_student(Student* student, int c_stud) {
    do {
        cout << "Введите имя студента: "; cin >> student->name;
        cout << "Введите фамилию студента: "; cin >> student->surname;
        cout << "Введите название группы студента: "; cin >> student->group;
        cout << "Введите возраст студента: "; cin >> student->age;
        for (int i = 0; i < 5; i++) {
            cout << "Введите оценку студента" << "\n";
            cin >> student->numbers[i];
        }
        c_stud--;
    } while (c_stud != 0);
    return student;
}


void showData(Student* std, int c_std) {
    for (int j = 0; j < c_std; j++) {
        cout << "Имя: " << std->name << " Фамилия: " << std->surname << " Название группы: " << std->group << " Возраст студента: " << std->age << endl;
        cout << "Оценка студента: ";
        for (int i = 5; i > 0; i--) {
            cout << std->numbers[i] << " ";
        }
    }
}
