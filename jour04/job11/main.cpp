// contient la fonction main qui utilise les fonctions definies dans fruits.cpp pour afficher le tableau statique de fruits.

#include <iostream>
#include "fruits.hpp"

int main() {
    std::string fruit[5] = {"Pomme", "Banane", "Fraise", "Mangue", "Orange"};

    afficherTableauStatique(fruit, 5);

    int nbFavoris;
    std::cout << "\nCombien de fruits préférez-vous ? ";
    std::cin >> nbFavoris;

    std::string* favoris = nullptr;

    remplirFavoris(favoris, nbFavoris);

    afficherFavoris(favoris, nbFavoris);

    delete[] favoris;

    return 0;
}
