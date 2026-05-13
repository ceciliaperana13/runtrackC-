
#include <iostream>
#include "structures.hpp"

void afficherStaff(const Staff& s1, const Staff& s2) {
    std::cout << "=== STAFF ===" << std::endl;
    std::cout << "Prénom 1 : " << s1.prenom << std::endl;
    std::cout << "Prénom 2 : " << s2.prenom << std::endl;
}

void saisirEtudiants(Etudiant*& tab, int& taille) {
    std::cout << "\nCombien d'étudiants voulez-vous saisir ? ";
    std::cin >> taille;

    tab = new Etudiant[taille];

    for (int i = 0; i < taille; i++) {
        std::cout << "\nÉtudiant " << i + 1 << std::endl;
        std::cout << "Nom : ";
        std::cin >> tab[i].nom;
        std::cout << "Prénom : ";
        std::cin >> tab[i].prenom;
    }
}

void afficherEtudiants(const Etudiant* tab, int taille) {
    std::cout << "\n=== Prénoms des étudiants ===" << std::endl;
    for (int i = 0; i < taille; i++) {
        std::cout << tab[i].prenom << std::endl;
    }
}
