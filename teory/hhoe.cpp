// Project6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

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
void showArifmData(Student* std, int c_std);
void showSortData(Student* std, int c_std);
Student* AddInfo_for_Student(Student* student, const int c_std);
Student* setData_student(Student* student, int c_stud);


void menu() {
    cout << "2. Вывод информации в виде таблицы: " << endl;
    cout << "3. Вывод всех студентов, средняя оценка которых больше 4: " << endl;
    cout << "4. Упорядочивание массива по возрасту, его вывод: " << endl;
}

void choice_menu_tab(int choice, Student* std, int count) {
    switch (choice) {
    case 2: showData(std, count); break;
    case 3: showArifmData(std, count); break;
    case 4: showSortData(std, count); break;
    default: cout << "Ошибка"; break;
    }
}
int main()
{

    setlocale(LC_ALL, "ru");
    const int count_student = 3;
    Student new_students[count_student] = {};
    setData_student(new_students, count_student);
    cout << "\n";
    cout << "Список функции:\n";
    menu();
    int stop = 0;
    while (stop != 1) {
        cout << "Введите ваш выбор: \n";
        int choice; cin >> choice;
        choice_menu_tab(choice, new_students, count_student);
        cout << "Продолжить? Конец == 1: ";
        cin >> stop;
    }
}



Student* setData_student(Student* student, int c_stud) {
    int indx = 0;
    do {
        cout << "Введите имя студента: "; cin.getline(student[indx].name, 32);
        cout << "Введите фамилию студента: "; cin.getline(student[indx].surname, 45);
        cout << "Введите название группы студента: "; cin.getline(student[indx].group, 20);
        cout << "Введите возраст студента: "; cin >> student[indx].age;
        for (int i = 0; i < 5; i++) {
            cout << "Введите оценку студента" << "\n";
            cin >> student[indx].numbers[i];
        }
        cin.get();
        indx++;
    } while (indx < c_stud);
    return 0;
}


void showData(Student* std, int c_std) {
    for (int j = 0; j < c_std; j++) {
        cout << "Имя: " << std[j].name << " Фамилия: " << std[j].surname << " Название группы: " << std[j].group << " Возраст студента: " << std[j].age << " ";
        cout << "Оценка студента: ";
        for (int i = 0; i < 5; i++) {
            cout << std[j].numbers[i] << " ";
        }
        cout << "\n";
    }
}

void showArifmData(Student* std, int c_std) {
    for (int j = 0; j < c_std; j++) {
        int count = 0;
        for (int i = 0; i < 5; i++) {
            count += std[j].numbers[i];
        }
        if (count / 5 >= 4) {
            cout << "Имя студента = " << std[j].name << endl;
        }
        cout << "\n";
    }
}

void showSortData(Student* std, int c_std) {
    string massiv[c_std] = {};
    
    for (int i = 0; i < c_std; i++) {
        string mass[c_std] = {}; int c = 0; string name;
        for (int j = 0; j < c_std; j++) {
            if (std[i].name > std[j].name) {
                massiv[i] = std[j].name;
            }
            else {
                c++;
                name = std[j].name;
            } 
        }
        if (c == c_std) massiv[0] = name;
    }
    
    for (int i = 0; i < c_std; i++) {
        cout << "Имя: " << massiv[i] << endl;
    }
}
