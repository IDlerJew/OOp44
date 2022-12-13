#include "Real.h"

Real Real::sqrtn(const int power)
{
    double x = pow(this->value, 1. / power);
    return Real(x);
}

Real Real::powPI()
{
    double x = pow(M_PI, this->value);
    return Real(x);
}
ostream& operator<<(ostream& os, const Number& number) {
    os << number.value;
    return os;
}
