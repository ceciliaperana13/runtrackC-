//permettant d'additionner deux nombres et d'afficher leur addition.
#include <iostream>


int main() {
    int num1, num2;

    std::cout << "Entrez le premier nombre: ";
    std::cin >> num1;

    std::cout << "Entrez le deuxième nombre: ";
    std::cin >> num2;

    int sum = num1 + num2;
    std::cout << "La somme de " << num1 << " et " << num2 << " est: " << sum << std::endl;

    return 0;
}