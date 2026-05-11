//qui demande à l'utilisateur d'entrer un nombre,puis inverse ce nombre et l'affiche à l'utilisateur. Par exemple : 12345 devient 54321.
#include <iostream>

int main() {
    int number, reversedNumber = 0;

    std::cout << "Entrez un nombre entier: ";
    std::cin >> number;

    while (number != 0) {
        int digit = number % 10; // Obtenir le dernier chiffre
        reversedNumber = reversedNumber * 10 + digit; // Ajouter le chiffre à l'inverse
        number /= 10; // Supprimer le dernier chiffre
    }

    std::cout << "Le nombre inversé est: " << reversedNumber << std::endl;

    return 0;
}