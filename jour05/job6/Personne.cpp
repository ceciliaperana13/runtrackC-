#include "Personne.hpp"

// --- CONSTRUCTEUR ---
Personne::Personne(const std::string& pnom, int pvie, float pdef)
    : nom(pnom), vie(pvie), defense(pdef)
{}

// --- AFFICHAGE ---
void Personne::afficher() const {
    std::cout << "Personnage : " << nom
              << " | Vie : " << vie
              << " | Défense : " << defense;
}

// --- SUBIR DEGATS ---
void Personne::subirDegats(int degats) {
    int degatsReels = degats - static_cast<int>(defense);
    if (degatsReels < 0) degatsReels = 0;

    vie -= degatsReels;
    if (vie < 0) vie = 0;
}
