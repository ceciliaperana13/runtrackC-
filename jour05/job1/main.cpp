#include <iostream>
#include "Joueur.hpp"

int main() {
    Joueur j;

    j.initialiser(5, 10);
    j.afficherPosition();

    j.deplacer(3, -2);
    j.afficherPosition();

    // Utilisation des setters
    j.setX(100);
    j.setY(200);

    std::cout << "\nAprès modification via setters :" << std::endl;
    j.afficherPosition();

    // Utilisation des getters
    std::cout << "X actuel : " << j.getX() << std::endl;
    std::cout << "Y actuel : " << j.getY() << std::endl;

    return 0;
}
