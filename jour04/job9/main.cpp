// tableau dynamique d’entier de taille défini par l’utilisateur. L’utilisateur doit entrer le nombre d’entiers défini. 
#include <iostream>

int main() {
    int taille;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;

    int* tab = new int[taille]; // Allocation dynamique

    // Initialisation du tableau
    for (int i = 0; i < taille; i++) {
        tab[i] = i * 10; // Exemple de valeurs
    }

    // Affichage du contenu du tableau
    std::cout << "Contenu du tableau :" << std::endl;
    for (int i = 0; i < taille; i++) {
        std::cout << "Element " << i << " : " << tab[i] << std::endl;
    }

    delete[] tab; // Libération de la mémoire
    return 0;
}
