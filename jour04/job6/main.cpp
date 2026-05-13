#include <iostream>
#include <string>
#include "variables.hpp"

int main() {
    int entier = 17;
    float flottant = 3.14f;
    double reel = 123.345;
    std::string caractere = "La Plateforme";

    int* pEntier = &entier;
    float* pFlottant = &flottant;
    double* pReel = &reel;
    std::string* pCaractere = &caractere;

    std::cout << "== Valeurs initiales ==" << std::endl;
    afficherValeurs(pEntier, pFlottant, pReel, pCaractere);

    modifierValeurs(pEntier, pFlottant, pReel, pCaractere);

    std::cout << "\n== Valeurs après modification via pointeurs ==" << std::endl;
    afficherValeurs(pEntier, pFlottant, pReel, pCaractere);

    return 0;
}
