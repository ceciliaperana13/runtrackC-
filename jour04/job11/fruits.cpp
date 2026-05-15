// Ce fichier contient les définitions des fonctions pour gérer les fruits, y compris l'affichage d'un tableau statique de fruits, le remplissage d'un tableau dynamique de fruits favoris et l'affichage de ce tableau dynamique.


#include <iostream>
#include "fruits.hpp"

void afficherTableauStatique(const std::string fruit[], int taille) {
    std::cout << "=== Liste des fruits ===" << std::endl;
    for (int i = 0; i < taille; i++) {
        std::cout << i + 1 << " - " << fruit[i] << std::endl;
    }
}

void remplirFavoris(std::string*& favoris, int taille) {
    favoris = new std::string[taille];

    std::cout << "\nEntrez vos fruits favoris :" << std::endl;
    for (int i = 0; i < taille; i++) {
        std::cout << "Fruit favori " << i + 1 << " : ";
        std::cin >> favoris[i];
    }
}

void afficherFavoris(const std::string* favoris, int taille) {
    std::cout << "\n=== Vos fruits favoris ===" << std::endl;
    for (int i = 0; i < taille; i++) {
        std::cout << i + 1 << " - " << favoris[i] << std::endl;
    }
}
