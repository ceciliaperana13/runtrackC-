//un jeu nommé “Nombre mystère”
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr)); // initialisation du random
    int nombreMystere = std::rand() % 101; // nombre entre 0 et 100

    int chances = 7; // nombre d'essais
    int choix;

    std::cout << "=== Jeu du Nombre Mystere ===" << std::endl;
    std::cout << "Devinez le nombre entre 0 et 100." << std::endl;
    std::cout << "Vous avez " << chances << " chances." << std::endl;

    for (int i = 1; i <= chances; i++) {
        std::cout << "\nEssai " << i << " : ";
        std::cin >> choix;

        if (choix == nombreMystere) {
            std::cout << "Bravo ! Vous avez trouve le nombre !" << std::endl;
            return 0;
        }
        else if (choix < nombreMystere) {
            std::cout << "Trop petit !" << std::endl;
        }
        else {
            std::cout << "Trop grand !" << std::endl;
        }
    }

    std::cout << "\nVous avez perdu ! Le nombre mystere etait : " 
              << nombreMystere << std::endl;

    return 0;
}
