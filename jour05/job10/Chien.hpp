#ifndef CHIEN_HPP
#define CHIEN_HPP

#include "Animal.hpp"

class Chien : public Animal {
public:
    void crier() const override {
        std::cout << "Woof!" << std::endl;
    }

    void manger() const override {
        std::cout << "Le chien a une alimentation variée." << std::endl;
    }
};

#endif
