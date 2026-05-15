// class mere abstraite 

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string nom;

private:
    static int totalAnimaux;   // compteur global

public:
    // Constructeur
    Animal(const std::string& pnom);

    // Méthodes abstraites
    virtual void crier() const = 0;
    virtual void manger() const = 0;

    // Getter du compteur
    static int getTotalAnimaux();

    virtual ~Animal() {}
};

#endif
