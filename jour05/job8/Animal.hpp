//class abstraite
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
public:
    // Méthodes abstraites (virtuelles pures)
    virtual void crier() const = 0;
    virtual void manger() const = 0;

    virtual ~Animal() {}
};

#endif
