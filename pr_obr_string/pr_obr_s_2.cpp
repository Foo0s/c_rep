
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
    text_user = analitics_string(text_user);
    cout << text_user;
}

string analitics_string(string text) {
    int indx_w = 0; int count = 0;
    for (int j = text.length(); j > 0; j--) {
        int indx_j = 0;
        int s = 0;
        if (text[j] == '.') {
            indx_j += j;
            s += (j - 1);
            for (int i = s; i > 0; i--) {
                if (text[i] != ' ') {
                    indx_w = i;
                    break;
                }
                if (text[i] == ' ') { count++; }
            }
        }
        text.replace(indx_w + 1, count, "");
        j -= count-1;
        if (text[j] == '#') {
            text.erase(j, 1);
            j--;
        }
    }
    cout << count << endl;
    return text;
}
