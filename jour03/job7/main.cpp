//à l'utilisateur de saisir 10 entiers stockés dans un tableau T. Le programme doit ensuite afficher l'indice du plus grand élément.
#include <iostream>

#include <iostream>

int main() {
    int T[10];
    int maxIndex = 0;

    std::cout << "Entrez 10 entiers : ";

    // Saisie des 10 entiers
    for (int i = 0; i < 10; i++) {
        std::cin >> T[i];
    }

    // Recherche de l'indice du plus grand élément
    for (int i = 1; i < 10; i++) {
        if (T[i] > T[maxIndex]) {
            maxIndex = i;
        }
    }

    std::cout << "Indice du plus grand élément : " << maxIndex << std::endl;

    return 0;
}
