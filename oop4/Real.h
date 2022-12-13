#pragma once
#include "Number.h"
class Real : public Number {
public:
    Real(double n) : Number(n) {};

    Real sqrtn(const int power);

    Real powPI();
};