// les definitions des structures Staff et etudiant+les fonction d'affichage et de saisie des etudiants.

#ifndef STRUCTURES_HPP
#define STRUCTURES_HPP

#include <string>

struct Staff {
    std::string nom;
    std::string prenom;
};

struct Etudiant {
    std::string nom;
    std::string prenom;
};

void afficherStaff(const Staff& s1, const Staff& s2);
void saisirEtudiants(Etudiant*& tab, int& taille);
void afficherEtudiants(const Etudiant* tab, int taille);

#endif
