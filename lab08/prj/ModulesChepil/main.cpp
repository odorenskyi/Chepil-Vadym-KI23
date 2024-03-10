#include <iostream>
#include <cmath>

using namespace std;

void s_calculation(int x, int y, int z)
{
    system("chcp 65001 > nul");
    const double PI = 3.141592653589793238;
    float S;
    S = pow(2 * z + 1, x) - sqrt(abs(y - (1 / 2) * z)) + z + PI;
    cout << "S: " << setprecision(1) << fixed << S << endl;
}

