/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int find_word_a(string text);
int find_words(string text);

int main()
{
    
    
    /*
        6-й вариант. 1-е задание.
        Пользователь вводит текст. Вычислить количество слов начинающихся на А.
        Количество слов мало или Мало. 
        Заменить в тексте слова доллар на рубль.
    */
    
    string text_user;
    cout << "Введите текст: ";
    getline(cin, text_user);
    int count = find_words(text_user);
    cout << "Количество слова на букву А: " << count;
    text_user.replace(text_user.begin(), text_user.end(), "доллар", "рубль");
    cout << text_user;
}


int find_word_a(string text) {
    int count = 0;
    for(int i = 0; i < text.length(); i++) {
        if (text[i-1] == ' ') {
            if (text[i] == 'А' || text[i] == 'а') {
                count++;
            }
        }
    }
    return count;
}

int find_words(string text) {
    int count = 0;
    for (int j = 0; j < text.length(); j++) {
        string word;
        if (text[j-1] == ' ') {
            for (int i = j; i < text.length(); i++) {
                word += text[i];
                if (text[i] == ' ') {
                    if (word.compare("Мало") == 0 || word.compare("мало") == 0) {
                        count++;
                    }
                    break;
                }
            }
        }
    }
    return count;
}

