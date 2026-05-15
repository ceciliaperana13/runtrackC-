//qui permet d'afficher le plus grand de trois entiers saisis par l’utilisateur.
#include <iostream>


int main() {
    int num1, num2, num3;

    std::cout << "Entrez le premier entier: ";
    std::cin >> num1;

    std::cout << "Entrez le deuxième entier: ";
    std::cin >> num2;

    std::cout << "Entrez le troisième entier: ";
    std::cin >> num3;

    int max = num1; // Supposons que num1 est le plus grand

    if (num2 > max) {
        max = num2; // num2 est plus grand que max
    }

    if (num3 > max) {
        max = num3; // num3 est plus grand que max
    }

    std::cout << "Le plus grand entier est: " << max << std::endl;

    return 0;
}