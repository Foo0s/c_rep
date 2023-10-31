
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int find_word_a(string text);
int find_words(string text);
string text_replace(string text);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*
        6-й вариант. 1-е задание.
        Пользователь вводит текст. Вычислить количество слов начинающихся на А.
        Количество слов мало или Мало.
        Заменить в тексте слова доллар на рубль.
    */

    string text_user;
    cout << "Введите текст: ";
    getline(cin, text_user);
    text_user.insert(0, " ");
    int count = find_word_a(text_user);
    cout << "Количество слова на букву А: " << count << endl;
    cout << "Количество слов мало: " << find_words(text_user) << endl;
    string new_str = text_replace(text_user);
    cout << "Изменённая строка: " << new_str;
}

string text_replace(string text) {
    string rubl = "рубль";
    string dollar = "доллар";
    int indx = 0;

    for (int j = 0; j < text.length() - 1; j++) {
        indx = text.find(dollar);
        if (j == indx) {
            text.replace(indx, dollar.length(), rubl);
        }
    }
    return text;
}


int find_word_a(string text) {
    int count = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (text[i + 1] == 'А' || text[i + 1] == 'а') {
                count++;
            }
        }
    }
    return count;
}

int find_words(string text) {
    int count = 0;
    for (int j = 0; j <= text.length(); j++) {
        string word;
        if (text[j] == ' ') {
            for (int i = (j + 1); i < text.length(); i++) {
                if (text[i] == ' ') {
                    if (word == "мало" || word == "Мало") {
                        count++;
                    }
                    break;
                }
                word += text[i];
            }
        }
    }
    return count;
}
