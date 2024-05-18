#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <fstream>

using namespace std;

float s_calculation(int x, int y, int z)
{
    system("chcp 65001 > nul");
    const double PI = 3.141592653589793238;
    float S;
    S = pow(2 * z + 1, x) - sqrt(abs(y - (1 / 2) * z)) + z + PI;
    cout << "S: " << setprecision(1) << fixed << S << endl;
}
void discount_calculation(float score)
{
    system("chcp 65001 > nul");
    float expense;
    if(score > 0){
        if(score < 1000){
            expense = score * 0.01;
        }
        if(score >= 1000 && score < 2000){
            expense = score * 0.05;
        }
        if(score >= 2000 && score < 3000){
            expense = score * 0.07;
        }
        if(score >= 3000 && score < 5000){
            expense = score * 0.1;
        }
        if(score >= 5000 && score < 10000){
            expense = score * 0.15;
        }
        if(score >= 10000){
            expense = score * 0.2;
        }
        score -= expense;
        cout << "Сума до сплати: " << setprecision(2) << fixed << score << endl;
    }
    else{
        cout << "Введені не відповідні дані" << endl;
    }
}
void matching_sizes(short int underwear_size)
{
    system("chcp 65001 > nul");
    if (underwear_size%2 == 0 && (underwear_size <= 54 && underwear_size >= 44)){
        if (underwear_size == 44) {
            cout << "Міжнародний розмір:  S " << endl;
            cout << "Чехія, Словаччина розмір:  6 " << endl;
            cout << "Великобританія розмір:  34 " << endl;
            cout << "Німечина розмір:  немає " << endl;
            cout << "Франція розмір:  2 " << endl;
        }
        if (underwear_size == 46) {
            cout << "Міжнародний розмір:  M " << endl;
            cout << "Чехія, Словаччина розмір:  7" << endl;
            cout << "Великобританія розмір:  36 " << endl;
            cout << "Німечина розмір:  4 " << endl;
            cout << "Франція розмір:  3 " << endl;
        }
        if (underwear_size == 48) {
            cout << "Міжнародний розмір:  L " << endl;
            cout << "Чехія, Словаччина розмір: 8 " << endl;
            cout << "Великобританія розмір:  38 " << endl;
            cout << "Німечина розмір:  5 " << endl;
            cout << "Франція розмір:  4 " << endl;
        }
        if (underwear_size == 50) {
            cout << "Міжнародний розмір:  XL " << endl;
            cout << "Чехія, Словаччина розмір:  9 " << endl;
            cout << "Великобританія розмір:  40 " << endl;
            cout << "Німечина розмір:  7 " << endl;
            cout << "Франція розмір:  5 " << endl;
        }
        if (underwear_size == 52) {
            cout << "Міжнародний розмір:  XXL " << endl;
            cout << "Чехія, Словаччина розмір:  10" << endl;
            cout << "Великобританія розмір:  42 " << endl;
            cout << "Німечина розмір:  7 " << endl;
            cout << "Франція розмір:  6 " << endl;
        }
        if (underwear_size == 54) {
            cout << "Міжнародний розмір:  XXXL " << endl;
            cout << "Чехія, Словаччина розмір: немає " << endl;
            cout << "Великобританія розмір:  44 " << endl;
            cout << "Німечина розмір:  8 " << endl;
            cout << "Франція розмір:  немає " << endl;
        }
    }
    else {
            printf("Таких розмірів немає\n");
        }
}

int bit_range(int N)
{
    system("chcp 65001 > nul");
    if (N < 0 || N > 80000) {
        cout << "Число не входить в діапазон <0 - 80000>" << endl;
        return 1;
    }
    int cou = 0, k = 1;
    while (N)
    {
        cou += (N%2) * k;
        k *= 10;
        N/=2;

    }
    string str = to_string(cou);
    int sum_one = count(str.begin(), str.end(), '1');
    int binary_zero = count(str.begin(), str.end(), '0');
    reverse(str.begin(), str.end());
    if (str.length() < 6) {
        cout << "Недостатньо бітів" << endl;
        return 1;
    }
    switch (str[5]) {
        case '0':
            cout << "Кількість двійкових нулів: " << binary_zero << endl;
            break;
        case '1':
            cout << "Сума двійкових одиниць: " << sum_one << endl;
            break;
    }
    return 0;
}

void fayl_info(const char* fayl) {
    fstream fileread(fayl);
    string buffer;
    string allInfo;
    string authorInfo = "Автор: Вадим Чепіль\nУстанова: ЦНТУ\nМісто: Кропивницький\nКраїна: Україна\nРік: 2024\n";
    string languageInfo;

    if (!fileread.is_open()) {
        ofstream file(fayl);
        file.close();
        fileread.open(fayl);
    }

    if (fileread.is_open()) {
        getline(fileread, buffer);
        allInfo = buffer;

        auto isEnglishSentence = [](const string& sentence) {
            bool hasEnglish = false;
            bool hasUkrainian = false;
            for (char ch : sentence) {
                if ((ch >= 'А' && ch <= 'Я') || (ch >= 'а' && ch <= 'я')) {
                    hasUkrainian = true;
                } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                    hasEnglish = true;
                }
            }
            return hasEnglish && !hasUkrainian;
        };

        auto removeWords = [](const string& sentence, const string words[], int wordCount) {
            string modifiedSentence = sentence;
            for (int i = 0; i < wordCount; ++i) {
                size_t pos;
                while ((pos = modifiedSentence.find(words[i])) != string::npos) {
                    modifiedSentence.erase(pos, words[i].length());
                }
            }
            return modifiedSentence;
        };

        bool isEnglish = isEnglishSentence(buffer);
        languageInfo = "Мова речення: " + string(isEnglish ? "англійська" : "українська");

        if (isEnglish) {
            transform(buffer.begin(), buffer.end(), buffer.begin(), ::toupper);
        } else {
            const string wordsToRemove[] = {"лінощі", "сесія", "академзаборгованість"};
            buffer = removeWords(buffer, wordsToRemove, 3);
        }

        fileread.close();

        ofstream filewrite(fayl);
        filewrite << authorInfo << "\n";
        filewrite << languageInfo << "\n";
        filewrite << "Речення: " << buffer << "\n";
        filewrite.close();
    }
}
void law_info(const char* fayl)
{
    system("chcp 65001 > nul");
    fstream filewrite(fayl, ios_base::app);
    time_t currentTime = time(nullptr);
    char time[100];
    strftime(time, sizeof(time), "%Y-%m-%d %H:%M:%S", localtime(&currentTime));
    filewrite << "\nДата й час дозапису: " << time << endl;
}

void fayl_calculation(int x, int y, int z, int b, const char* fayl)
{
    float res_calc = s_calculation(x, y, z);
    int bin = 0, k = 1;
    while (b)
    {
        bin += (b%2) * k;
        k *= 10;
        b/=2;

    }
    string b_in_bin = to_string(bin);

    fstream filewrite(fayl, ios_base::app);
    filewrite << "\nS: " << setprecision(1) << fixed << res_calc <<endl;
    filewrite << "b у двійковій: " << b_in_bin <<endl;
    filewrite.close();
}
