#include <iostream>
#include <ctime>
#include <string.h>

using namespace std;
//Внести данные о 3-ух моделях и вывести ввиде таблицы инфу.
struct Size {
    int breast;
    int waist;
    int hips;
};

struct wonderfullWoman{
    char name[64];
    int age;
    int heigth;
    int weight;
    Size volumn;
    bool eng;
};

void showWoman(const struct wonderfullWoman Obj[], int amount){
    cout <<"============================================================" << endl;
    cout << "№\t"<<"Имя\t"<<"Возраст\n"<<"Рост\t"<<"Вес\t"<<"Объёмы\t\t"<<"Английский"<<endl;
    cout <<"============================================================" << endl;
    
    for(int i = 0; i < amount; i++){
        cout <<i++<<"\t"<<Obj[i].name<<"\t"<<Obj[i].age<<"\t"<<Obj[i].heigth<<"\t"<<Obj[i].weight<<"\t"<<Obj[i].volumn.breast<<" "<<Obj[i].volumn.waist<<" "<<Obj[i].volumn.hips<<"\t\t"<<Obj[i].eng<<endl;
    }
}

int main(){
    setlocale(LC_ALL, "ru");
    cout << "Введите количество woman: " << endl;
    int amount_w = 0; cin >> amount_w;
    wonderfullWoman woman[2] = {};
    for (int i = 0; i < amount_w; i++){
        cout << "Введит имя женщины: " << endl;
        char name[32]; cin >> name;
        cout << "Введите возраст женщины: " << endl;
        int age_w; cin >> age_w;
        cout << "Введите рост женщины: " << endl;
        int heigth; cin >> heigth;
        cout << "Введите вес женщины: " << endl; int weight; cin >> weight;
        cout << "Введите объёмы женщины: " << endl;
        int breast; int waist; int hips; cin >> breast; cin >> waist; cin >> hips;
        cout << "Женщина разговаривает на Англ. 1|0: ";
        bool answer; cin >> answer;
        strcpy(woman[i].name, name);
        woman[i].age = age_w; woman[i].heigth = heigth; woman[i].weight = weight;
        woman[i].volumn.breast = breast; woman[i].volumn.waist = waist; woman[i].volumn.hips = hips;
    }
    showWoman(woman, amount_w);
    return 0;
}
