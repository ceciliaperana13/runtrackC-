//le main 
#include <iostream>
#include "structures.hpp"

int main() {
    // --- STAFF ---
    Staff s1 = {"Cordial", "Alicia"};
    Staff s2 = {"Malardier", "Pierre"};

    afficherStaff(s1, s2);

    // --- ETUDIANTS ---
    Etudiant* etudiants = nullptr;
    int taille = 0;

    saisirEtudiants(etudiants, taille);
    afficherEtudiants(etudiants, taille);

    delete[] etudiants;

    return 0;
}
