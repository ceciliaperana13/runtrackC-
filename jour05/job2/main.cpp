// simulation de mouvement
#include <iostream>
#include "Joueur.hpp"

int main() {
    // Instanciation avec constructeur paramétré
    Joueur j(10, 20);
    j.afficherPosition();

    // Déplacements
    j.deplacer(5, -3);
    j.afficherPosition();

    j.deplacer(-2, 7);
    j.afficherPosition();

    // Utilisation des getters
    std::cout << "X actuel : " << j.getX() << std::endl;
    std::cout << "Y actuel : " << j.getY() << std::endl;

    return 0;
}
