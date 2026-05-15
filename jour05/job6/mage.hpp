#ifndef MAGE_HPP
#define MAGE_HPP

#include "Personne.hpp"

class Mage : public Personne {
public:
    Mage(const std::string& nom)
        : Personne(nom, 80, 3.0f) {}

    void afficher() const override {
        std::cout << "[Mage] ";
        Personne::afficher();
        std::cout << std::endl;
    }
};

#endif
