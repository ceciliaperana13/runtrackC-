#include <iostream>
#include "Operation.hpp"

int main() {

    Operation a(10);
    Operation b(5);

    Operation addition = a + b;
    Operation soustraction = a - b;
    Operation multiplication = a * b;
    Operation division = a / b;

    std::cout << "=== Résultats des opérations ===" << std::endl;

    std::cout << "Addition : ";
    addition.afficher();

    std::cout << "Soustraction : ";
    soustraction.afficher();

    std::cout << "Multiplication : ";
    multiplication.afficher();

    std::cout << "Division : ";
    division.afficher();

    return 0;
}
