#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    float a;
    double z;

    cout << "Введите значение a: ";
    cin >> a;

    z = ((a + 2) / pow(2 * a, 0.5) - a / (pow(2 * a, 0.5) + 2) + 2 / (a - pow(2 * a, 0.5))) * ((pow(a, 0.5) - pow(2, 0.5)) / (a + 2));

    cout << "Результат вычисления: Z1 = " << z << " a = " << a << "\n";

    z = 1 / (pow(a, 0.5) + pow(2, 0.5));

    cout << "Результат вычисления: Z2 = " << z << " x = " << a;

    return 0;
}