/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


using namespace std;

struct info{
    int hips;
    int breast;
    int wisp;
};

struct Woman{
    char name[32];
    char surname[60];
    int age;
    bool engKnow;
    info dop_info;
};

Woman* AddStruct_wm(Woman* obj, const int amount);
void SetData_wm(Woman* obj, const int amount);
void showData_wm(const Woman* obj, const int amount);


int main() {
    setlocale(LC_ALL, "ru");
    Woman* wm = 0;
    int woman_amount = 0; int choice_user = 0;
    do{
        wm = AddStruct_wm(wm, woman_amount);
        SetData_wm(wm, woman_amount);
        woman_amount++;
        cout << "Хотите продолжить, 1-Да, 0-Нет: "; cin >> choice_user;
    } while(choice_user != 0);
    showData_wm(wm, woman_amount);
    delete[] wm; //Освобождение памяти.
    
    return 0;
}

Woman* AddStruct_wm(Woman* obj_w, const int amount){
    if (amount == 0){
        obj_w = new Woman[amount + 1];
    }
    else{
        Woman* tempWmObj = new Woman[amount + 1];
        for(int i = 0; i < amount; i++){
            tempWmObj[i] = obj_w[i];
        }
        delete[] obj_w;
        
        obj_w = tempWmObj;
        return obj_w;
    }
}

void SetData_wm(Woman* obj, const int amount){
    cout << "Имя: " << endl;
    cin >> obj[amount].name;
    cout << "Фамилия: " << endl;
    cin >> obj[amount].surname;
    cout << "Возраст: " << endl;
    cin >> obj[amount].age;
    cout << "Знание английского: " << endl;
    cin >> obj[amount].engKnow;
    cout << "Доп. инфа: " << endl;
    cin >> obj[amount].dop_info.hips; cin >> obj[amount].dop_info.breast; cin >> obj[amount].dop_info.wisp;
}

void showData_wm(const Woman* obj, const int amount){
    system("cls");
    cout << "\n";
    cout << "№" << "Фамилия\t" << "Имя\t" << "Возраст\t" << "Знание английского\t" << "Доп. инфа\t" << endl;
    cout << "===========================================================" << std::endl;
    for (int i = 0; i < amount; i++) {
        cout << "№" << i << "\nФамилия: " << obj[i].surname << "\nИмя: " << obj[i].name << "\nВозраст: " << obj[i].age << "\nЗнание английского: " << obj[i].engKnow << "\nПараметры тела: " << obj[i].dop_info.breast << " " << obj[i].dop_info.wisp << " " << obj[i].dop_info.hips << endl;
    }
}
