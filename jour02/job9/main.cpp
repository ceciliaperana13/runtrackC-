//qui demande à l'utilisateur d’entrer un entier et qui affiche “GAGNE” si l'entier est entre a et b, (bornes incluses) où a et b sont des entiers naturels et a < b. Il affiche “PERDU” sinon.
#include <iostream>


int main() {
    int a, b, n;

    std::cout << "Entrez la borne a : ";
    std::cin >> a;

    std::cout << "Entrez la borne b : ";
    std::cin >> b;

    if (a >= b) {
        std::cout << "Erreur: a doit être inférieur à b." << std::endl;
        return 1; // Terminer le programme avec une erreur
    }

    std::cout << "Entrez un entier n : ";
    std::cin >> n;

    if (n >= a && n <= b) {
        std::cout << "GAGNE" << std::endl;
    } else {
        std::cout << "PERDU" << std::endl;
    }

    return 0;
}