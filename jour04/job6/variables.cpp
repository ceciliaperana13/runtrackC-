//definitions des fonctions 
#include <iostream>
#include <string>
#include "variables.hpp"

void afficherValeurs(int* pEntier, float* pFlottant, double* pReel, std::string* pCaractere) {
    std::cout << "Valeur de entier : " << *pEntier 
              << " | Adresse : " << pEntier << std::endl;

    std::cout << "Valeur de flottant : " << *pFlottant
              << " | Adresse : " << pFlottant << std::endl;

    std::cout << "Valeur de reel : " << *pReel
              << " | Adresse : " << pReel << std::endl;

    std::cout << "Valeur de caractere : " << *pCaractere
              << " | Adresse : " << pCaractere << std::endl;
}

void modifierValeurs(int* pEntier, float* pFlottant, double* pReel, std::string* pCaractere) {
    *pEntier += 10;
    *pFlottant += 1.0f;
    *pReel *= 2;
    *pCaractere = "Modifié via pointeur";
}
