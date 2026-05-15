#ifndef CHAT_HPP
#define CHAT_HPP

#include "Animal.hpp"

class Chat : public Animal {
public:
    Chat(const std::string& nom)
        : Animal(nom)
    {}

    void crier() const override {
        std::cout << "Miaou!" << std::endl;
    }

    void manger() const override {
        std::cout << "Le chat mange du poisson." << std::endl;
    }
};

#endif
