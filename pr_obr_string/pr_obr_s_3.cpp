
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

string analitics_string(string text);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*
        6-й вариант. 2-е задание.
        Пользователь ввёл текст с ошибками. после слова может находиться 1 или
        более пробелов перед точкой (или нет). Вывести исходный текст, убрав в
        нем эти пробелы перед точкой (между словом и точкой). В исходном тексте
        может быть много предложений и точек. А также удалить символы #.
    */

    string text_user;
    cout << "Введите текст: ";
    getline(cin, text_user);
    string new_txt = analitics_string(text_user);

    for (int i = 0; i < new_txt.length(); i++) {
        for (int j = 0; j < new_txt.length(); j++) {
            if (new_txt[i] > new_txt[j]) {
                char symbol = new_txt[j];
                new_txt[j] = new_txt[i];
                new_txt[i] = symbol;
            }
        }
    }
    reverse(new_txt.begin(), new_txt.end());
    cout << new_txt;
}

string analitics_string(string text) {
    string new_text = "";
    for (int i = text.size() - 7; i < text.size(); i++) {
        new_text += (text[i]);
    }

    return new_text;
}
