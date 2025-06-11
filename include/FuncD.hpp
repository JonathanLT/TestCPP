#pragma once

#include <vector>
#include <cmath>

using namespace std;

class FuncD {
public:
    FuncD() {};
    ~FuncD() {};

    inline double func(double x) {
        // Example function: f(x) = 4/(9*x^(1/4))
        return 4 / (9 * pow(x, 0.25));
    }
};