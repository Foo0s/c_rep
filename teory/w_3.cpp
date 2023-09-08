#include <iostream>
#include <cmath>

using namespace std;


int main(){
    setlocale(LC_ALL, "RU");
    int x; double one; double two;
    cout << "Введите любое математическое действие (1= *, 2= /, 3= %, 4= +, 5=-, 6= (pow), 7=(sqrt), 8=(abs): )" << endl;
    cin >> x;
    if (x > 8){
        cout << "Ошибка, таких операций по номером " << x << " не существует." << endl;
    }
    else{
        cout << "Введите первое число: " << endl;
        cin >> one;
        if (x >= 7){
            switch(x){
                case 7: cout << "Ваше число: " << pow(one, 1/2) << endl;
                        cout << "Ваша операция sqrt" << endl;
                        break;
            }
            if (x == 8){
                if (one > 0){
                    cout << "Ваше число: " << one << endl;
                    cout << "Ваша операция abs" << endl;
                }
                else{
                    cout << "Ваше число: " << one * -1 << endl;
                    cout << "Ваша операция abs" << endl;
                }   
            }
        }
        else{
            cout << "Введите второе число: " << endl;
            cin >> two;
            switch(x){
                case 1: cout << "Ваше число: " << one*two << endl;
                    cout << "Ваша операция *" << endl;
                    break;
                case 2:
                    cout << "Ваше число: " << one/two << endl;
                    cout << "Ваша операция /" << endl;
                    break;
                case 3:
                    cout << "Ваше число: " << (one / 100) * two << endl;
                    cout << "Ваша операция %" << endl;
                    break;
                case 4:
                    cout << "Ваше число: " << one+two << endl;
                    cout << "Ваша операция +" << endl;
                    break;
                case 5:
                    cout << "Ваше число: " << one-two << endl;
                    cout << "Ваша операция -" << endl;
                    break;
                case 6:
                    cout << "Ваше число: " << pow(one, two);
                    cout << "Ваша операция **" << endl;
                    break;
            }
        }   
    }
}