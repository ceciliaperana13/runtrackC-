// d’afficher le message "Hello World" N fois, tant que N n’est pas égal à 0.
#include <iostream>

int main() {
    int N;
    std::cout << "Entrez le nombre de fois que vous souhaitez afficher 'Hello World': ";
    std::cin >> N;

    while (N > 0) {
        std::cout << "Hello World" << std::endl;
        N--;
    }

    return 0;
}