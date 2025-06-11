#pragma once

#include <functional>

class Search {
public:
    Search() {};
    ~Search() {};
    void run(double (*func)(double), double start, double end, double step, 
             std::function<double(double)> condition = nullptr);
};
