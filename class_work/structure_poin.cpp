
#include <iostream>

using namespace std;


//Создать структуру Маршрут.
//Которая содержит следующие поля: пункт отправления, время отправления, вид транспорта, пункт прибытия.
//Время прибытия, цена поездки.
//Функции: пользователь ручками вводит инфу о маршрутах, заранее незная сколько маршрутов он введёт.
//Вывести всю введёную инфу в табличном формате на экран.
//После вывода предложить ввести тип автомобиля, транспорта. После выдать инфу о тех маршрутах где есть данный транспорт


struct time1 {
    int age;
    char tm[100];
};

struct time2 {
    int age;
    char tm[100];
};


struct Marshrut {
    char punkt_ot[100];
    time1 time1_o;
    char transport[100];
    char punkt_pr[100];
    time2 time2_o;
    int price;
};

void showData(Marshrut* mashrutca, int index) {
    for (int i = 0; i < index; i++) {
        cout << "Пункт отправки: " << mashrutca[i].punkt_ot << " | " << "Время отправки (год): " << mashrutca[i].time1_o.age << " | " << "Время отправки: " << mashrutca[i].time1_o.tm << "Вид транспорта: " << mashrutca[i].transport << " | " << "Пункт прибытия: " << mashrutca[i].punkt_pr << " | " << "Время прибытия (год): " << mashrutca[i].time2_o.age << " | " << "Время прибытия: " << mashrutca[i].time2_o.tm;
    }
}

Marshrut* AddStruct_wm(Marshrut* obj_w, const int amount) {
    if (amount == 0) {
        obj_w = new Marshrut[amount + 1];
    }
    else {
        Marshrut* tempWmObj = new Marshrut[amount + 1];
        for (int i = 0; i < amount; i++) {
            tempWmObj[i] = obj_w[i];
        }
        delete[] obj_w;

        obj_w = tempWmObj;
        return obj_w;
    }
}

Marshrut* SetStruct(Marshrut* new_marsh, int index) {
    cin.get();
    cout << "Введите пункт отправки: "; cin.getline(new_marsh[index].punkt_ot, 100); cin.ignore();
    cout << "Введите время отправки год, время через enter: "; cin >> new_marsh[index].time1_o.age; cin.getline(new_marsh[index].time1_o.tm, 100);
    cout << "Введите тип транспорта: "; cin.getline(new_marsh[index].transport, 100);
    cout << "Введите пункт прибытия: "; cin.getline(new_marsh[index].punkt_pr, 100);
    cout << "Введите время прибытия год, время через enter: "; cin >> new_marsh[index].time2_o.age; cin.getline(new_marsh[index].time2_o.tm, 100);
    cout << "Введите цену маршрута: "; cin >> new_marsh[index].price;
    return new_marsh;
}

int main()
{
    setlocale(LC_ALL, "ru");
    int choice = 0;
    Marshrut* new_marsh = 0;
    int index = 0;
    do {
        new_marsh = AddStruct_wm(new_marsh, index);
        SetStruct(new_marsh, index);
        index++;
        cout << "Любая цифра -> Конец\n0 - Продолжить: "; cin >> choice;
    } while (choice == 0);
    cout << "Исходные данные: " << endl;
    showData(new_marsh, index);
    cout << "\n";
    string choice_t;
    cout << "Введите типа транспорта средства: "; cin >> choice_t;
    cout << "\n";
    for (int i = 0; i < index; i++) {
        if (new_marsh[i].transport == choice_t) {
            cout << "\n";
            cout << "Пункт отправки: " << new_marsh[i].punkt_ot << " | " << ". Время отправки (год): " << new_marsh[i].time1_o.age << " | " << ". Время отправки: " << new_marsh[i].time1_o.tm << ". Вид транспорта: " << new_marsh[i].transport << " | " << ". Пункт прибытия: " << new_marsh[i].punkt_pr << " | " << ". Время прибытия (год): " << new_marsh[i].time2_o.age << " | " << ". Время прибытия: " << new_marsh[i].time2_o.tm;
            cout << "\n";
        }
    }
    cout << "\n";
    return 0;
}
