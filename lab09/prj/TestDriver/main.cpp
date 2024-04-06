#include <iostream>
#include <ModulesChepil.h>

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    cout << "Задача 9.1\nTC-1  ";
    discount_calculation(-100);
    cout << "TC-2  ";
    discount_calculation(0);
    cout << "TC-3  ";
    discount_calculation(500);
    cout << "TC-4  ";
    discount_calculation(1500);
    cout << "Tc-5  ";
    discount_calculation(2200);
    cout << "TC-6  ";
    discount_calculation(4300);
    cout << "TC-7  ";
    discount_calculation(8000);
    cout << "TC-8  ";
    discount_calculation(15000);
    cout << "TC-9  ";
    discount_calculation(125.50);
    cout << "TC-10  ";
    discount_calculation(735.00);

    cout << "\nЗадача 9.2\nTC-1\n";
    matching_sizes(44);
    cout << "\nTC-2\n";
    matching_sizes(46);
    cout << "\nTC-3\n";
    matching_sizes(48);
    cout << "\nTC-4\n";
    matching_sizes(50);
    cout << "\nTC-5\n";
    matching_sizes(52);
    cout << "\nTC-6\n";
    matching_sizes(54);
    cout << "\nTC-7\n";
    matching_sizes(43);
    cout << "\nTC-8\n";
    matching_sizes(55);
    cout << "\nTC-9\n";
    matching_sizes(-10);
    cout << "\nTC-10\n";
    matching_sizes(0);
    cout << "\n";

    cout << "Задача 9.3\nTC-1  ";
    bit_range(20);
    cout << "TC-2  ";
    bit_range(25);
    cout << "TC-3  ";
    bit_range(30);
    cout << "TC-4  ";
    bit_range(35);
    cout << "TC-5  ";
    bit_range(70);
    cout << "TC-6  ";
    bit_range(200);
    cout << "TC-7  ";
    bit_range(1000);
    cout << "TC-8  ";
    bit_range(777);
    cout << "TC-9  ";
    bit_range(96);
    cout << "TC-10  ";
    bit_range(158);
}
