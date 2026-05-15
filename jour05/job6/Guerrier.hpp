#ifndef GUERRIER_HPP
#define GUERRIER_HPP

#include "Personne.hpp"

class Guerrier : public Personne {
public:
    Guerrier(const std::string& nom)
        : Personne(nom, 150, 12.0f) {}

    void afficher() const override {
        std::cout << "[Guerrier] ";
        Personne::afficher();
        std::cout << std::endl;
    }
};

#endif
