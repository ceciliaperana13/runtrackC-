#include <iostream>
#include "note.hpp"

void afficherNotes(Note* tab, int taille) {
    if (taille == 0) {
        std::cout << "Aucune note enregistrée." << std::endl;
        return;
    }

    for (int i = 0; i < taille; i++) {
        std::cout << i + 1 << ") "
                  << tab[i].nom << " " << tab[i].prenom
                  << " : " << tab[i].valeur << std::endl;
    }
}

void ajouterNote(Note*& tab, int& taille) {
    Note* nouveau = new Note[taille + 1];

    for (int i = 0; i < taille; i++)
        nouveau[i] = tab[i];

    std::cout << "Nom : ";
    std::cin >> nouveau[taille].nom;

    std::cout << "Prénom : ";
    std::cin >> nouveau[taille].prenom;

    std::cout << "Note : ";
    std::cin >> nouveau[taille].valeur;

    delete[] tab;
    tab = nouveau;
    taille++;

    std::cout << "Note ajoutée !" << std::endl;
}

void supprimerNote(Note*& tab, int& taille) {
    if (taille == 0) {
        std::cout << "Aucune note à supprimer." << std::endl;
        return;
    }

    std::string nom, prenom;
    std::cout << "Nom de l'étudiant : ";
    std::cin >> nom;
    std::cout << "Prénom de l'étudiant : ";
    std::cin >> prenom;

    int index = -1;
    for (int i = 0; i < taille; i++) {
        if (tab[i].nom == nom && tab[i].prenom == prenom) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        std::cout << "Étudiant introuvable." << std::endl;
        return;
    }

    Note* nouveau = new Note[taille - 1];

    for (int i = 0, j = 0; i < taille; i++) {
        if (i != index) {
            nouveau[j] = tab[i];
            j++;
        }
    }

    delete[] tab;
    tab = nouveau;
    taille--;

    std::cout << "Note supprimée !" << std::endl;
}

void afficherMoyenne(Note* tab, int taille) {
    if (taille == 0) {
        std::cout << "Aucune note disponible." << std::endl;
        return;
    }

    float somme = 0;
    for (int i = 0; i < taille; i++)
        somme += tab[i].valeur;

    std::cout << "Moyenne des notes : " << (somme / taille) << std::endl;
}
