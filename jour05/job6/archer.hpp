
#ifndef ARCHER_HPP
#define ARCHER_HPP

#include "Personne.hpp"

class Archer : public Personne {
public:
    Archer(const std::string& nom)
        : Personne(nom, 100, 6.0f) {}

    void afficher() const override {
        std::cout << "[Archer] ";
        Personne::afficher();
        std::cout << std::endl;
    }
};

#endif
