
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "Real.h"

using namespace std;
int main()
{
    setlocale(0, "rus");
    double a1, b1;
    cout << "Введите первое число: ";
    cin >> a1;
    cout << "Введите второе число: ";
    cin >> b1;
    Real A1(a1);
    Real B1(b1);

    cout << "разность: ";
    cout << A1 - B1 << endl;

    cout << "произведение: ";
    cout << A1 * B1 << endl;

    cout << "кубический корень: ";
    cout << A1.sqrtn(3) << endl;

    cout << "Пи в степени " << A1 << endl;
    cout << A1.powPI() << endl;

    return 0;
}