// trouve la valeurs maximale dans un tableau d'entier 
#include <iostream>

int main() {
    int tab[] = {5, 12, 3, 19, 7};
    int taille = 5;

    int max = tab[0]; // on initialise avec le premier élément

    for (int i = 1; i < taille; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    std::cout << "La valeur maximale est : " << max << std::endl;

    return 0;
}