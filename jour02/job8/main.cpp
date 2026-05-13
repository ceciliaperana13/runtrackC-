//Écrire un programme qui affiche tous les entiers de a à b (bornes incluses) donnés par l’utilisateur en utilisant l’instruction while.
#include <iostream>

int main() {
    int a, b;

    std::cout << "Entrez la borne a : ";
    std::cin >> a;

    std::cout << "Entrez la borne b : ";
    std::cin >> b;

    int i = a;
    while (i <= b) {
        std::cout << i << std::endl;
        i++;
    }

    return 0;
}
