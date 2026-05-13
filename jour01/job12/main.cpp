//demande à l'utilisateur de taper cinq entiers et qui affiche leur moyenne. Vous êtes limités à deux variables.
#include <iostream>

int main() {
    int sum = 0;
    int average;

    std::cout << "Entrez cinq entiers: ";
    for (int i = 0; i < 5; i++) {
        int num;
        std::cin >> num;
        sum += num;
    }

    average = sum / 5;
    std::cout << "La moyenne est: " << average << std::endl;

    return 0;
}