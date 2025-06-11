#pragma once

#include <vector>
#include <cmath>

using namespace std;

class FuncC {
public:
    FuncC() {};
    ~FuncC() {};

    inline double func(double x) {
        // Example function: f(x) = x^2 log(x)
        return x * x * log(x);
    }
};