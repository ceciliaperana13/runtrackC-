//qui affiche tous les entiers de a à b (bornes incluses) donnés par l’utilisateur en utilisant l’instruction for.
#include <iostream>


#include <iostream>

int main() {
    int a, b;

    std::cout << "Entrez la borne a : ";
    std::cin >> a;

    std::cout << "Entrez la borne b : ";
    std::cin >> b;

    for (int i = a; i <= b; i++) {
        std::cout << i << std::endl;
    }

    return 0;
}
