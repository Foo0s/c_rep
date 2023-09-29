#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;
int returnSumMatrix(int *matrix, int s, int ss);
int returnSumMatrix_st(int *matrix, int s, int ss);
int returnSumDiag(int *matrix, int s, int ss);
int returnArifmPd(int *matrix, int s, int ss);

void massive(int *matrix, int s, int ss){
    srand(time(NULL));
    for(int i = 0; i < (s*ss); i++){
        matrix[i] = -15+rand()%31;
    }
    cout << "Массив заполнен";
}

void showMatrix(int *matrix, int s, int ss){
    cout << "\nВывод матрицы: \n";
    for(int j = 0; j < (s*ss); j++){
        cout << setw(8) << matrix[j] << " ";
        if (j % s == 0) cout << " \n";
    }
}

void showMenu(){
    cout << "Пункт меню" << endl;
    cout << "1. Нахождение суммы каждой строки" << endl;
    cout << "2. Нахождение суммы каждого столбца" << endl;
    cout << "3. Посчитать произведение главной диагонали" << endl;
    cout << "4. Среднее арифмитическое побочной диагонали" << endl;
    cout << "5. Показать массив";
}

void Menu(int *matrix, int type_s, int s, int ss){
    while(true){
        switch (type_s){
        case 1: cout << returnSumMatrix(matrix, s, ss); break;
        case 2: cout << returnSumMatrix_st(matrix, s, ss); break;
        case 3: cout << "Произведение элементов на главной диагонали = " << returnSumDiag(matrix, s, ss); break;
        case 4: cout << "Среднее арифмитическое = " << returnArifmPd(matrix, s, ss); break;
        case 5: showMatrix(matrix, s, ss); break;
    }
    cout << "\n\nХотите продолжить? (1-Y/2-N): ";
    int type_continue;
    cin >> type_continue;
    if (type_continue == 2){
        cout << "\nХод программы завершён.";
        break;
    }
    else{
        cout << "\nВведите пункт меню: " << endl;
        cin >> type_s;
        
    }
    }
}

int main()
{
    cout<<"Введитe количество строк и столбцов в массиве через Enter: ";
    int s; int ss;
    cin >> s; cin >> ss;
    int matrix[s][ss] = {};
    massive((int*) matrix, s, ss);
    showMenu();
    cout << "\nВведите пункт меню: "; 
    int p_menu; cin >> p_menu;
    Menu((int*) matrix, p_menu, s, ss);
}


int returnSumMatrix(int *matrix, int s, int ss){
    int sum_matrix = 0; int indx = 0; int cc = 0;
    for(int i = 1; i < (s*ss); i++){
        if(cc == s){
            cout << "Сумма строки " << indx+1 << ": " << sum_matrix << endl;
            sum_matrix = 0;
            cc = 0;
            indx++;
        }
        sum_matrix += matrix[i];
        cc++;
    }
    cout << "Сумма строки " << s << ": " << sum_matrix+matrix[0] << endl;
    return 0;
}

int returnSumMatrix_st(int *matrix, int s, int ss){
    int sum_matrix_st = 0; int cc = 0; int count_index = 0; int index = 0;
    int array[s] = {};
    for(int j = 0; j < s; j++){
        sum_matrix_st = 0;
        for(int i = 0; i < (s*ss); i += 1){
            if(cc == ss){
                array[count_index] = sum_matrix_st;
                cc = 0;
                count_index++;
                index = 0;
                cout << "\n";
                break;
            }
            sum_matrix_st += matrix[index+j];
            index += s;
            cc++;
        }
    }
    
    for(int k = 1; k < s; k++){
        cout << "Сумма " << k << "столбца = " << array[k] << endl;
    }
    cout << "Сумма " << s << "столбца = " << array[0] << endl;
    return 0;
}

int returnSumDiag(int *matrix, int s, int ss){
    int sum_d = 1; int count = 0; int count_s = 0;
    for(int i = 1; i < (s*ss); i+= (s+1)){
        sum_d *= matrix[i];
        count++;
        if (count == (s)){
            count_s++;
            break;
        }
    }
    if (s==ss) sum_d*=matrix[0];
    return sum_d;
}

int returnArifmPd(int *matrix, int s, int ss){
    int sum_pd = 0; int index = s;
    for(int i = 0; i < s; i++){
        sum_pd += matrix[index];
        index += s-1;
        if(s == ss) continue;
        else if (i == (s-1)) break;
    }
    return (double)(sum_pd / s);
}
