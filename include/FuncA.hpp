#pragma once

#include <vector>
#include <cmath>

using namespace std;

class FuncA {
public:
    FuncA() {};
    ~FuncA() {};

    inline double func(double t) {
        // Example function: f(t) = sin(t) + cos(sqrt(3)t)
        return sin(t) + cos(sqrt(3) * t); 
    }
};