//prend en entrée un tableau d’entiers et qui retourne la somme des éléments pairs du tableau
#include <iostream>

int sommePairs(const int tab[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        if (tab[i] % 2 == 0) {
            somme += tab[i];
        }
    }
    return somme;
}

int main() {
    const int TAILLE = 5;
    int tab[TAILLE] = {1, 2, 3, 4, 5};

    std::cout << "Somme des éléments pairs : " << sommePairs(tab, TAILLE) << std::endl;

    return 0;
}
