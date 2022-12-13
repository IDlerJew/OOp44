#include "Number.h"

double Number::GetValue()
{
        return value;
}

Number Number::operator*(const Number& other) const
{
    return Number(this->value * other.value);
}

Number Number::operator-(const Number& other) const
{
    return Number(this->value - other.value);
}
