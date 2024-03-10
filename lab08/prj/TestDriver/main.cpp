#include <iostream>
#include "ModulesChepil.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    cout << "TC_01: ";
    s_calculation(5, 10, 2);
    cout << "TC_02: ";
    s_calculation(5, 12, 7);
    cout << "TC_03: ";
    s_calculation(2, 5, 10);
    cout << "TC_04: ";
    s_calculation(10, 10, 10);
    cout << "TC_05: ";
    s_calculation(0, 0, 0);
    cout << "TC_06: ";
    s_calculation(-10, 5, -12);
    cout << "TC_07: ";
    s_calculation(0, 0, -23);
    cout << "TC_08: ";
    s_calculation(-2, 1, 87);
    cout << "TC_09: ";
    s_calculation(11, -9, 0);
    cout << "TC_10: ";
    s_calculation(7, 129, 5);
    return 0;
}
