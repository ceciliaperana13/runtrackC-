//permettant de vérifier si un nombre donné est un nombre narcissique (ou d'Armstrong) ou non.
#include <iostream>
#include <cmath>

int main() {
    int number, originalNumber, remainder, n = 0;
    double result = 0.0;

    std::cout << "Entrez un nombre entier: ";
    std::cin >> number;

    originalNumber = number;

    // Compter le nombre de chiffres
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // Calculer la somme des puissances des chiffres
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Vérifier si le nombre est narcissique
    if (static_cast<int>(result) == number) {
        std::cout << number << " est un nombre narcissique." << std::endl;
    } else {
        std::cout << number << " n'est pas un nombre narcissique." << std::endl;
    }

    return 0;
}