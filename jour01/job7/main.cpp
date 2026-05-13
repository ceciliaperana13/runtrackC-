//permet d'afficher si un nombre entier saisi au clavier est pair ou impair.
#include <iostream>

int main() {
    int number;

    std::cout << "Entrez un nombre entier: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << number << " est un nombre pair." << std::endl;
    } else {
        std::cout << number << " est un nombre impair." << std::endl;
    }

    return 0;
}
