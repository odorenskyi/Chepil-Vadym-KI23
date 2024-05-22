#include <iostream>
#include <Windows.h>
#include <fstream>
#include <sstream>

#include "ModulesChepil.h"

#define TEST_SUITE_FILE "\\lab12\\TestSuite\\TestSuite.txt"
#define TEST_RESULTS_FILE "\\lab12\\TestSuite\\TestResults.txt"

using namespace std;

int main()
{
    system("chcp 65001 & cls");

    string currentFilePath = __FILE__;
    int checkResult = currentFilePath.find("\\lab12\\prj\\");
    if (checkResult == -1) {
        for (int i = 0; i < 100; ++i) {
            Beep(500, 100);
        }

        ofstream resultFile(TEST_RESULTS_FILE);
        if (resultFile.is_open()) {
            resultFile << "Встановлені вимоги порядку виконання лабораторної роботи порушено!";
            resultFile.close();
        } else {
            cerr << "Не вдалося відкрити файл для запису.";
            return 1;
        }
    } else {
        ifstream inpFile(TEST_SUITE_FILE);
        ofstream outFile(TEST_RESULTS_FILE);
        string line;
        int testCase = 0;

        while (getline(inpFile, line)) {
            stringstream ss(line);
            float length;
            float width;
            float height;
            ss >> length;
            ss.ignore(1, ';');
            ss >> width;
            ss.ignore(1, ';');
            ss >> height;
            ss.ignore(1, ';');

            ClassLab12_Chepil testObj = ClassLab12_Chepil(length, width, height);

            testCase += 1;
            outFile << "Тест " << testCase << endl;
            outFile << "Довжина: " << testObj.getLength() << endl;
            outFile << "Ширина: " << testObj.getWidth() << endl;
            outFile << "Висота: " << testObj.getHeight() << endl;
            outFile << "Об'єм: " << testObj.getVolume() << endl << endl;
        }

        cout << "Роботу застосунку завершено, результат збережений у файлі TestResults.txt" << endl;
        system("pause");

        inpFile.close();
        outFile.close();
    }

    return 0;
}
