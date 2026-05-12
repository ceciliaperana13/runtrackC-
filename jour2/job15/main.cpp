// permettant de générer la suite de Fibonacci jusqu’à une limite donnée par l’utilisateur.
#include <iostream>


int main() {
    int limit;
    std::cout << "Entrez une limite pour la suite de Fibonacci : ";
    std::cin >> limit;

    int a = 0, b = 1;
    std::cout << "Suite de Fibonacci jusqu'à " << limit << " : ";

    while (a <= limit) {
        std::cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    std::cout << std::endl;
    return 0;
}