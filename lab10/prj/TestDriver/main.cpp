#include <iostream>
#include "ModulesChepil.h"
#include <fstream>

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    cout << "TASK 10.1 TEST:" << endl;
    ofstream test1 ("test1.txt");
    test1 << "London is the capital of Great Britain, its political, economic, and commercial centre."
    "It is one of the largest cities in the world and the largest city in Europe. Its population is about 8 million."
    "London is divided into several parts: the City, Westminster, the West End, and the East End.";
    test1.close();
    fayl_info("test1.txt");
    ofstream test2 ("test2.txt");
    test2 << "Лондон — столиця Великої Британії, її політичний, економічний і торговий центр."
    "Це одне з найбільших міст світу та найбільше місто Європи."
    "Його населення становить близько 8 млн. Лондон розділений на кілька частин: Сіті, Вестмінстер, Вест-Енд і Іст-Енд.";
    test2.close();
    fayl_info("test2.txt");
    ofstream test3 ("test3.txt");
    test3 << "Більшість студентів через лінощі мають академзаборгованість до сесії.";
    test3.close();
    fayl_info("test3.txt");
    ofstream test4 ("test4.txt");
    test4 << "Більшість студентів через Лінощі мають Академзаборгованість до Сесії.";
    test4.close();
    fayl_info("test4.txt");
    ofstream test5 ("test5.txt");
    test5 << "Більшість студентів через lazy мають academic debt до session.";
    test5.close();
    fayl_info("test5.txt");
    cout << "END OF TEST 10.1" << endl;

    cout << "TASK 10.2 TEST:" << endl;
    ofstream test6 ("test6.txt");
    test6 << "";
    test6 << "Стаття 62. Права та обов'язки здобувачів вищої освіти"
    "\nЗдобувачі вищої освіти мають право на:"
    "\n1) вибір форми навчання;"
    "\n2) безпечні та нешкідливі умови навчання, праці та побуту;"
    "\n3) трудову діяльність у вільний від навчання час;"
    "\n4) додаткову оплачувану відпустку у зв'язку з навчанням;"
    "\n5) академічну мобільність, у тому числі міжнародну;"
    "\n6) участь у діяльності органів громадського самоврядування вищого навчального закладу;"
    "\n7) користування навчальною, науковою, виробничою, культурною, спортивною, побутовою, оздоровчою базою вищого навчального закладу;"
    "\n8) захист від будь-яких форм експлуатації, фізичного та психічного насильства;"
    "\n9) безкоштовне користування бібліотеками, інформаційними фондами, навчальними, науковими та спортивними об'єктами вищого навчального закладу;"
    "\n10) канікулярну відпустку тривалістю не менше восьми календарних тижнів на навчальний рік.";
    test6.close();
    law_info("test6.txt");
    ofstream test7 ("test7.txt");
    test7 << "Конституція України\n";
    test7 << "Стаття 62. Права та обов'язки здобувачів вищої освіти"
    "\nЗдобувачі вищої освіти мають право на:"
    "\n1) вибір форми навчання;"
    "\n2) безпечні та нешкідливі умови навчання, праці та побуту;"
    "\n3) трудову діяльність у вільний від навчання час;"
    "\n4) додаткову оплачувану відпустку у зв'язку з навчанням;"
    "\n5) академічну мобільність, у тому числі міжнародну;"
    "\n6) участь у діяльності органів громадського самоврядування вищого навчального закладу;"
    "\n7) користування навчальною, науковою, виробничою, культурною, спортивною, побутовою, оздоровчою базою вищого навчального закладу;"
    "\n8) захист від будь-яких форм експлуатації, фізичного та психічного насильства;"
    "\n9) безкоштовне користування бібліотеками, інформаційними фондами, навчальними, науковими та спортивними об'єктами вищого навчального закладу;"
    "\n10) канікулярну відпустку тривалістю не менше восьми календарних тижнів на навчальний рік.";
    test7.close();
    law_info("test7.txt");
    ofstream test8 ("test8.txt");
    test8 << "Конституція України була створена 28 червня 1996року.\n";
    test8 << "Стаття 62. Права та обов'язки здобувачів вищої освіти"
    "\nЗдобувачі вищої освіти мають право на:"
    "\n1) вибір форми навчання;"
    "\n2) безпечні та нешкідливі умови навчання, праці та побуту;"
    "\n3) трудову діяльність у вільний від навчання час;"
    "\n4) додаткову оплачувану відпустку у зв'язку з навчанням;"
    "\n5) академічну мобільність, у тому числі міжнародну;"
    "\n6) участь у діяльності органів громадського самоврядування вищого навчального закладу;"
    "\n7) користування навчальною, науковою, виробничою, культурною, спортивною, побутовою, оздоровчою базою вищого навчального закладу;"
    "\n8) захист від будь-яких форм експлуатації, фізичного та психічного насильства;"
    "\n9) безкоштовне користування бібліотеками, інформаційними фондами, навчальними, науковими та спортивними об'єктами вищого навчального закладу;"
    "\n10) канікулярну відпустку тривалістю не менше восьми календарних тижнів на навчальний рік.";
    test8.close();
    law_info("test8.txt");
    cout << "END OF TEST 10.2" << endl;

    cout << "TASK 10.3 TEST:" << endl;
    ofstream test9 ("test9.txt");
    test9 << "Реалізація програмних модулів оброблення даних складових типів з файловим I/O";
    test9.close();
    fayl_calculation(5, 10, 2, 3, "test9.txt");
    ofstream test10 ("test10.txt");
    test10 << "Реалізація ПЗ оброблення динамічних структур даних та бінарних файлів.";
    test10.close();
    fayl_calculation(5, 12, 7, 8, "test10.txt");
    ofstream test11 ("test11.txt");
    test11 << "C++ має фреймфорк для створення графічних інтерфесів та Desktop додатків - QT";
    test11.close();
    fayl_calculation(2, 5, 10, 0, "test11.txt");
    ofstream test12 ("test12.txt");
    test12 << "";
    test12.close();
    fayl_calculation(0, 0, 0, 121, "test12.txt");
    ofstream test13 ("test13.txt");
    test13.close();
    fayl_calculation(-10, 5, -12, 96, "test13.txt");
    cout << "END OF TEST 10.3" << endl;

    system("pause");
    return 0;
}
