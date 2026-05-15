#ifndef CHAT_HPP
#define CHAT_HPP

#include "Animal.hpp"

class Chat : public Animal {
public:
    void crier() const override {
        std::cout << "Miaou!" << std::endl;
    }

    // Version héritée (sans paramètre)
    void manger() const override {
        std::cout << "Le chat mange du poisson." << std::endl;
    }

    // Nouvelle version AVEC paramètre
    void manger(const std::string& nourriture) const {
        if (nourriture == "des croquettes") {
            std::cout << "Le chat mange des croquettes." << std::endl;
        } else {
            std::cout << "Le chat mange " << nourriture << "." << std::endl;
        }
    }
};

#endif
//on surcharge la méthode manger() avec un paramètre 