//qui affiche la table de multiplication d’un entier donné par l’utilisateur.
#include <iostream>


int main() {
    int number;

    std::cout << "Entrez un entier pour afficher sa table de multiplication: ";
    std::cin >> number;

    std::cout << "Table de multiplication de " << number << ":" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
    }

    return 0;
}
