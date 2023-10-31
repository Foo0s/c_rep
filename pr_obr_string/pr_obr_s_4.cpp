
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

string analitics_string(string text, string text_user_2);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*
        6-й вариант. 4-е задание.
        Даны две строки текста. Определить встречается ли хотя бы один раз каждый из
        6 символов первой строки во второй строке. Например: Пусть исходная строка Str1 : “xyz”; Str2: “x a d c x y xw” . Тогда “х” – встречается 3 раза “y”— встречается 1
        раз, “z”— встречается 0 раз. Не каждый символ встречается , например “z” не
        встречается ни разу.
    */

    string text_user; string text_user_2;
    cout << "Введите строку (1): ";
    getline(cin, text_user);
    cout << "Введите строку (2): ";
    getline(cin, text_user_2);
    string new_txt = analitics_string(text_user, text_user_2);
    cout << new_txt;
}

string analitics_string(string text, string text_user_2) {
    int count = 0;

    for (int i = 0; i < text.size(); i++) {
        if (text_user_2.find(text[i])) {
            count++;
        }
    }

    if (count == text.size()) {
        return "Yeas";
    }
    else {
        return "Nope";
    }
}
