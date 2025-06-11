#include <iostream>
#include "FuncA.hpp"
#include "FuncB.hpp"
#include "FuncC.hpp"
#include "Search.hpp"

double funcA_wrapper(double t) {
    FuncA f;
    return f.func(t);
}
double funcB_wrapper(double t) {
    FuncB f;
    return f.func(t);
}
double funcC_wrapper(double t) {
    FuncC f;
    return f.func(t);
}

int main() {
    double min_value = std::numeric_limits<double>::infinity();
    Search search;

    auto min_condition = [&min_value](double value) {
        if (value < min_value) {
            min_value = value;
        }
        return 0.0;
    };

    // Exemple : recherche sur l'intervalle [0, 10] avec un pas de 0.5
    
    min_value = std::numeric_limits<double>::infinity();
    search.run(funcA_wrapper, 0.0, 10.0, 0.5, min_condition);
    std::cout << "Minimum trouvé : " << min_value << std::endl;
    
    min_value = std::numeric_limits<double>::infinity();
    search.run(funcB_wrapper, 0.0, 10.0, 0.5, min_condition);
    std::cout << "Minimum trouvé : " << min_value << std::endl;
    
    min_value = std::numeric_limits<double>::infinity();
    search.run(funcC_wrapper, 0.0, 10.0, 0.5, min_condition);
    std::cout << "Minimum trouvé : " << min_value << std::endl;

    return 0;
}
