#include <iostream>
#include "Joueur.hpp"

// - CONSTRUCTEURS -
Joueur::Joueur() : x(0), y(0), nom("Inconnu") {}

Joueur::Joueur(int px, int py) : x(px), y(py), nom("Inconnu") {}

Joueur::Joueur(int px, int py, std::string pnom)
    : x(px), y(py), nom(pnom) {}

// - GETTERS -
int Joueur::getX() const { return this->x; }
int Joueur::getY() const { return this->y; }
std::string Joueur::getNom() const { return this->nom; }

// - SETTERS utilisant this -
void Joueur::setX(int px) { this->x = px; }
void Joueur::setY(int py) { this->y = py; }
void Joueur::setNom(const std::string& pnom) { this->nom = pnom; }

// - MÉTHODES utilisant this -
void Joueur::deplacer(int dx, int dy) {
    this->x += dx;
    this->y += dy;
}

void Joueur::teleporter(int nx, int ny) {
    this->x = nx;
    this->y = ny;
}

void Joueur::renommer(const std::string& nouveauNom) {
    this->nom = nouveauNom;
}

void Joueur::afficher() const {
    std::cout << "Joueur : " << this->nom
              << " | Position : (" << this->x << ", " << this->y << ")" 
              << std::endl;
}
