
//Operation.hpp → déclaration + constructeurs + getters
#ifndef OPERATION_HPP
#define OPERATION_HPP

#include <iostream>

class Operation {
private:
    float valeur;

public:
    // Constructeur
    Operation(float v) : valeur(v) {}

    // Getter
    float getValeur() const { return valeur; }

    // Surcharges d'opérateurs (définies dans le .cpp)
    Operation operator+(const Operation& autre) const;
    Operation operator-(const Operation& autre) const;
    Operation operator*(const Operation& autre) const;
    Operation operator/(const Operation& autre) const;

    // Affichage
    void afficher() const;
};

#endif
