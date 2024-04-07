#include <iostream>
#include <ModulesChepil.h>

using namespace std;

int main()
{
    system("chcp 65001 > nul");
    char symbol;
    cout << "Введіть символ виклику функції: " << endl;
    cin >> symbol;
    switch (symbol) {
        case 's':
            int x, y, z;
            cout << "Введіть x:" << endl;
            cin >> x;
            cout << "Введіть y:" << endl;
            cin >> y;
            cout << "Введіть z:" << endl;
            cin >> z;
            s_calculation(x, y, z);
            break;
        case 'f':
            int score;
            cout << "Введіть суму покупки:" << endl;
            cin >> score;
            discount_calculation(score);
            break;
        case 'g':
            short int underwear_size;
            cout << "Введіть розмір білизни:" << endl;
            cin >> underwear_size;
            matching_sizes(underwear_size);
            break;
        case 'h':
            int N;
            cout << "Введіть N:" << endl;
            cin >> N;
            bit_range(N);
            break;
        case 'J':
            exit(1);
            break;
        case 'j':
            exit(1);
            break;
        default:
            cout << "\a\a" << endl;
    }
    main();
}
