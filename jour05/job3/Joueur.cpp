#include <iostream>
#include "Joueur.hpp"

// Constructeur par défaut
Joueur::Joueur() : x(0), y(0), nom("Inconnu") {}

// Constructeur avec x et y
Joueur::Joueur(int px, int py) : x(px), y(py), nom("Inconnu") {}

// Constructeur avec x, y et nom
Joueur::Joueur(int px, int py, std::string pnom)
    : x(px), y(py), nom(pnom) {}

// --- GETTERS ---
int Joueur::getX() const { return x; }
int Joueur::getY() const { return y; }
std::string Joueur::getNom() const { return nom; }

// --- SETTERS ---
void Joueur::setX(int px) { x = px; }
void Joueur::setY(int py) { y = py; }
void Joueur::setNom(const std::string& pnom) { nom = pnom; }

// --- MÉTHODES ---
void Joueur::afficher() const {
    std::cout << "Joueur : " << nom
              << " | Position : (" << x << ", " << y << ")" << std::endl;
}

void Joueur::deplacer(int dx, int dy) {
    x += dx;
    y += dy;
}
