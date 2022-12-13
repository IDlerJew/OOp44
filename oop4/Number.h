#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
class Number {
protected:
    double value;
public:
    Number(double n = 0) : value(n) {}
    double GetValue();
    Number operator*(const Number& other) const;
    Number operator-(const Number& other) const;
    friend ostream& operator<<(ostream& os, const Number& number);
};

