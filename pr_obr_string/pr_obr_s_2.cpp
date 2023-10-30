/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

string analitics_string(string text);

int main()
{
    
    
    /*
        6-й вариант. 1-е задание.
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
    for (int j = 0; j < text.length(); j++) {
        if (text[j] == '.') {
            for (int i = j; i > 0; i--) {
                if (text[i] == ' ') {
                    text.erase(i, 1);
                }
            }
        }
        if (text[j] == '#') {
            text.erase(j, 1);
        }
    }
    return text;
}

