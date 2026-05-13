#include <iostream>
#include "Joueur.hpp"

Joueur::Joueur() : x(0), y(0) {}

// --- SETTERS ---
void Joueur::setX(int px) {
    x = px;
}

void Joueur::setY(int py) {
    y = py;
}

// --- GETTERS ---
int Joueur::getX() const {
    return x;
}

int Joueur::getY() const {
    return y;
}

// --- MÉTHODES ---
void Joueur::initialiser(int px, int py) {
    x = px;
    y = py;
}

void Joueur::afficherPosition() const {
    std::cout << "Position du joueur : (" << x << ", " << y << ")" << std::endl;
}

void Joueur::deplacer(int dx, int dy) {
    x += dx;
    y += dy;
}
