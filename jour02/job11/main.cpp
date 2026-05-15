//permettant de calculer la factorielle d'un nombre entier donné (n!). Par exemple : 0! = 1. Attention aux stack overflow !
#include <iostream>


int main() {
    int n;
    std::cout << "Entrez un entier n pour calculer n! : ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Erreur: La factorielle n'est pas définie pour les nombres négatifs." << std::endl;
        return 1; // Terminer le programme avec une erreur
    }

    unsigned long long factorial = 1; // Utiliser unsigned long long pour éviter les débordements pour les petits n

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << n << "! = " << factorial << std::endl;

    return 0;
}