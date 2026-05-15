//Initialiser un tableau statique d’entier avec les valeurs de votre choix. Afficher l’adresse de chaque élément du tableau et leur valeur.
#include <iostream>

int main() {
    int tab[5] = {10, 20, 30, 40, 50};

    int* p = tab; // pointeur vers le premier élément

    for (int i = 0; i < 5; i++) {
        std::cout << "Element " << i
                  << " | Adresse : " << (p + i)
                  << " | Valeur : " << *(p + i)
                  << std::endl;
    }

    return 0;
}
