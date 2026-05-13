//permettant d'afficher la table de multiplication des nombres entiers de 1 à 10.
#include <iostream>
#include <iomanip>

int main() {
    // En-tête
    std::cout << "    ";
    for (int i = 1; i <= 10; i++) {
        std::cout << std::setw(4) << i;
    }
    std::cout << "\n---------------------------------------------\n";

    // Lignes du tableau
    for (int i = 1; i <= 10; i++) {
        std::cout << std::setw(3) << i << " |";
        for (int j = 1; j <= 10; j++) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << std::endl;
    }

    return 0;
}
