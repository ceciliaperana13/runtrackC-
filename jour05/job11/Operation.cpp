//Operation.cpp → implémentation des opérateurs
#include "Operation.hpp"

// Addition
Operation Operation::operator+(const Operation& autre) const {
    return Operation(this->valeur + autre.valeur);
}

// Soustraction
Operation Operation::operator-(const Operation& autre) const {
    return Operation(this->valeur - autre.valeur);
}

// Multiplication
Operation Operation::operator*(const Operation& autre) const {
    return Operation(this->valeur * autre.valeur);
}

// Division
Operation Operation::operator/(const Operation& autre) const {
    if (autre.valeur == 0) {
        std::cout << "Erreur : division par zéro !" << std::endl;
        return Operation(0);
    }
    return Operation(this->valeur / autre.valeur);
}

// Affichage
void Operation::afficher() const {
    std::cout << "Valeur = " << valeur << std::endl;
}
