// Ce fichier contient la définition de la structure Note et les déclarations des fonctions pour gérer les notes des étudiants.

#ifndef NOTE_HPP
#define NOTE_HPP

#include <string>

struct Note {
    std::string nom;
    std::string prenom;
    float valeur;
};

void afficherNotes(Note* tab, int taille);
void ajouterNote(Note*& tab, int& taille);
void supprimerNote(Note*& tab, int& taille);
void afficherMoyenne(Note* tab, int taille);

#endif
