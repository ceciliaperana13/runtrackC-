#include <iostream>

int main() {
    int n;

    do {
        std::cout << "Donnez un nombre > 0 : ";
        std::cin >> n;

        if (n <= 0) {
            std::cout << "Le nombre doit être strictement positif.\n";
        }

    } while (n <= 0);

    return 0;
}
