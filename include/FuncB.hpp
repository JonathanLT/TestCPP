#pragma once

#include <vector>
#include <cmath>

using namespace std;

class FuncB {
public:
    FuncB() {};
    ~FuncB() {};

    inline double func(double x) {
        // Example function: f(x) = -(sqrt(25-x^2))
        return -(sqrt(25 - x * x));
    }
};