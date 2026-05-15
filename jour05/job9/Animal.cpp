#include "Animal.hpp"

// Initialisation du membre statique
int Animal::totalAnimaux = 0;

// Constructeur
Animal::Animal(const std::string& pnom)
    : nom(pnom)
{
    totalAnimaux++; // chaque animal créé incrémente le compteur
}

// Getter du compteur
int Animal::getTotalAnimaux() {
    return totalAnimaux;
}
