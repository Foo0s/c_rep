#include <iostream>

using namespace std;

int main()
{
    //Реализовать вывод предыдущего числа и следущего.
    cout<<"Введите число: ";
    int numb;
    cin >> numb;
    cout << "The next number for the number " << numb << " is " << numb+1 << endl;
    cout << "The previous number for the number " << numb << " is " << numb-1;
}
