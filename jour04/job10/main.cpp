//utilisation de case pour gérer les différentes options du menu (afficher les notes, ajouter une note, supprimer une note, afficher la moyenne).
#include <iostream>
#include "note.hpp"

int main() {
    Note* tab = nullptr;
    int taille = 0;
    int choix;

    do {
        std::cout << "\n== MENU ==" << std::endl;
        std::cout << "1. Ajouter une note" << std::endl;
        std::cout << "2. Afficher la liste des notes" << std::endl;
        std::cout << "3. Supprimer une note" << std::endl;
        std::cout << "4. Afficher la moyenne" << std::endl;
        std::cout << "5. Quitter" << std::endl;
        std::cout << "Votre choix : ";
        std::cin >> choix;

        switch (choix) {
            case 1: ajouterNote(tab, taille); break;
            case 2: afficherNotes(tab, taille); break;
            case 3: supprimerNote(tab, taille); break;
            case 4: afficherMoyenne(tab, taille); break;
            case 5: std::cout << "Au revoir " << std::endl; break;
            default: std::cout << "invalide." << std::endl;
        }

    } while (choix != 5);

    delete[] tab;
    return 0;
}
