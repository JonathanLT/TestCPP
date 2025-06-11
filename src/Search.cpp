#include "Search.hpp"
#include <cstddef>
#include <iostream>
#include <functional>

void Search::run(double (*func)(double), double start, double end, double step, 
             std::function<double(double)> condition) {
    for (double x = start; x <= end; x += step) {
        double result = func(x);
        std::cout << "f(" << x << ") = " << result << std::endl;

        if (condition && condition(result) > 0) {
            std::cout << "Condition met at x = " << x << std::endl;
            break;
        }
    }
}