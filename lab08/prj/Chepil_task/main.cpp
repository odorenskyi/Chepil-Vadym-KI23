#include <iostream>
#include "ModulesChepil.h"

void task_8_1();
void task_8_2(int a, int b);

using namespace std;

int main()
{
    int x, y, z, a, b;
    system("chcp 65001 & cls");
    cout << "Введіть значення x:";
    cin >> x;
    cout << "Введіть значення y:";
    cin >> y;
    cout << "Введіть значення z:";
    cin >> z;
    cout << "Введіть значення a:";
    cin >> a;
    cout << "Введіть значення b:";
    cin >> b;
    cout << endl;
    task_8_1();
    task_8_2(a,b);
    s_calculation(x, y, z);
    cout << "x у десятковій формі: " << x << endl;
    cout << "y у десятковій формі: " << y << endl;
    cout << "z у десятковій формі: " << z << endl;
    cout << "x у шістнадцятковій формі: " << hex << x << endl;
    cout << "y у шістнадцятковій формі: " << hex << y << endl;
    cout << "z у шістнадцятковій формі: " << hex << z << endl;
    return 0;
}
void task_8_1(){
    cout << " Чепіль Вадим ©" << endl;
}

void task_8_2(int a, int b){
    bool result;
    cout << boolalpha;
    result = a + 1 >= b;
    cout << result << endl;
}
