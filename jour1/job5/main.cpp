//permettant de multiplier deux nombres et d'afficher leur produit.
#include <iostream>


int main() {
    int num1, num2;

    std::cout << "Entrez le premier nombre: ";
    std::cin >> num1;

    std::cout << "Entrez le deuxième nombre: ";
    std::cin >> num2;

    int product = num1 * num2;
    std::cout << "Le produit de " << num1 << " et " << num2 << " est: " << product << std::endl;

    return 0;
}